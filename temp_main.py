from PyQt5 import QtWidgets, QtCore
from can2 import Ui_MainWindow
from PyQt5.QtWidgets import QFileDialog, QHeaderView, QInputDialog
import ParseDbc


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)
        tabs = self.tabWidget
        self.dbc_json = {}
        self.messages_to_generate = {}
        self.signals_to_generate = list()

        tabs.tabCloseRequested.connect(self.close_tab)

        self.treeWidget_dbc_signals.itemDoubleClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.listWidget_selected_signals.itemDoubleClicked.connect(
            self.list_item_double_clicked
        )
        self.listWidget_selected_signals.itemClicked.connect(self.describes_signal)
        self.listWidget_confirmed_signals.itemDoubleClicked.connect(
            self.confirmed_signal_remove
        )

        self.pushButton_1_select_dbc.clicked.connect(self.open_explorer_dbc)
        self.pushButton_2_generate.clicked.connect(self.generate)
        self.pushButton_3_select_all_messages.clicked.connect(self.select_all_messages)

    def select_all_messages(self):
        self.listWidget_confirmed_signals.clear()
        for row_number in range(self.treeWidget_dbc_signals.topLevelItemCount()):
            item = self.treeWidget_dbc_signals.topLevelItem(row_number)
            self.listWidget_confirmed_signals.addItem(item.text(0))
        return

    def write_file(
        self, header_file, type_def, signal_name, start_bit, stop_bit, length
    ):
        header_file.write(
            "\n\t"
            + type_def
            + " "
            + str(signal_name)
            + "_"
            + str(start_bit)  # Convert to string
            + "_"
            + str(stop_bit)  # Convert to string
            + " : "
            + str(length)
            + " ;"
        )
        return

    def generate(self):
        header_name, ok = QInputDialog.getText(
            self, "Input Dialog", "Enter header file name:"
        )
        if ok:
            header_name = header_name + ".h"
            with open(header_name, "w") as f:
                f.write(
                    "#ifndef FEV_VCU_DATA_H \n#define FEV_VCU_DATA_H \n#include <stdint.h>  // Include for UINT32 type\n\n"
                )
                self.write_struct()
                for row_number in range(self.listWidget_confirmed_signals.count()):
                    message = self.dbc_json[
                        self.listWidget_confirmed_signals.item(row_number).text()
                    ]
                    class_name = (
                        str(self.lineEdit_1_prefix.text())
                        + "_"
                        + message["message_name"]
                    )
                    f.write("\ntypedef struct {")
                    first_signal = True
                    prev_stop_bit = 0
                    prev_start_bit = 0
                    prev_length = 0
                    for signal in message["signals"]:
                        stop_bit = (
                            int(signal["signal_start"])
                            + int(signal["signal_length"])
                            - 1
                        )
                        if not first_signal:
                            if (prev_start_bit + prev_length) != int(
                                signal["signal_start"]
                            ):
                                reserved_bits = (
                                    int(signal["signal_start"]) - prev_stop_bit - 1
                                )
                                if reserved_bits <= 8:
                                    uint_type = "uint8"
                                elif reserved_bits <= 16:
                                    uint_type = "uint16"
                                elif reserved_bits <= 32:
                                    uint_type = "uint32"
                                else:
                                    uint_type = "uint64"
                                self.write_file(
                                    f,
                                    uint_type,
                                    "NoUsedBits",
                                    prev_stop_bit,
                                    prev_stop_bit + reserved_bits,
                                    reserved_bits,
                                )
                        self.write_file(
                            f,
                            signal["signal_type_def"],
                            signal["signal_name"],
                            signal["signal_start"],
                            stop_bit,
                            signal["signal_length"],
                        )
                        prev_stop_bit, prev_start_bit, prev_length, first_signal = (
                            int(stop_bit),
                            int(signal["signal_start"]),
                            int(signal["signal_length"]),
                            False,
                        )
                    f.write("\n} " + class_name + " ;\n")
                f.write("\n\n#endif  // FEV_VCU_DATA_H")
            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage("info : Structs have been created ")
            self.listWidget_confirmed_signals.clear()
            return

    def confirmed_signal_remove(self):
        self.listWidget_confirmed_signals.takeItem(
            self.listWidget_confirmed_signals.currentRow()
        )
        return

    def describes_signal(self):
        item = self.listWidget_selected_signals.currentItem()
        for signal in self.signals_to_generate:
            if signal["signal_name"] == item.text():
                self.tableWidget_display_signals.item(0, 0).setText(
                    signal["signal_name"]
                )
                self.tableWidget_display_signals.item(0, 2).setText(
                    signal["signal_min"]
                )
                self.tableWidget_display_signals.item(0, 3).setText(
                    signal["signal_max"]
                )
                self.tableWidget_display_signals.item(0, 1).setText(
                    signal["signal_factor"]
                )
                self.tableWidget_display_signals.item(0, 4).setText(
                    signal["signal_offset"]
                )
                self.tableWidget_display_signals_2.item(0, 0).setText(signal["comment"])

        header = self.tableWidget_display_signals_2.horizontalHeader()
        header.setSectionResizeMode(0, QHeaderView.ResizeToContents)
        header.setMinimumSectionSize(20)

    def list_item_double_clicked(self, item):
        event = QtWidgets.QApplication.mouseButtons()
        try:
            if event == QtCore.Qt.LeftButton:
                self.listWidget_selected_signals.takeItem(
                    self.listWidget_selected_signals.row(item)
                )
                self.statusBar().setStyleSheet("background-color : lightgreen")
                self.statusBar().showMessage(
                    "info : Signal have been removed succesfully from Selected Signals window"
                )
            return
        except Exception as e:
            print(e)
            self.statusBar().setStyleSheet("background-color : red")
            self.statusBar().showMessage(
                "Error : Something went wrong while the signal was being removed"
            )
            return

    def tree_item_double_clicked_add_signal(self, item):
        event = QtWidgets.QApplication.mouseButtons()
        if event == QtCore.Qt.LeftButton:  # left click control
            # did the signal selected before it controls below
            confirmed_or_not = True
            self.listWidget_selected_signals.clear()

            for row_number in range(self.listWidget_confirmed_signals.count()):
                row = self.listWidget_confirmed_signals.item(row_number)
                if item.text(0) == row.text():
                    confirmed_or_not = False

            if confirmed_or_not:
                self.listWidget_confirmed_signals.addItem(item.text(0))

            for signal in self.dbc_json[item.text(0)]["signals"]:
                self.listWidget_selected_signals.addItem(signal["signal_name"])
                self.signals_to_generate.append(signal)
            # self.messages_to_generate[item.text(0)] = self.dbc_json[item.text(0)]
            return

    def open_explorer_dbc(self):
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
            path = dialog.getOpenFileName(None, "Open File", "", "(*.dbc)")
            self.dbc_json = ParseDbc.parse(path[0])
            order = 0
            self.treeWidget_dbc_signals.clear()
            for message_name in self.dbc_json:  # to add messages from dbc to treeWidget
                item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_dbc_signals)
                item_0.setText(order, message_name)
                self.treeWidget_dbc_signals.topLevelItem(order).setText(0, message_name)
                order += 1

            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage("Info : File Exprolere is Opened.")
            return
        except:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "Error : An error occurred when the file was openning"
            )
            return

    def close_tab(self, index):
        tabs = self.tabWidget
        tabs.removeTab(index)
        return


app = QtWidgets.QApplication([])
window = MainWindow()
# window.showFullScreen()
window.showNormal()
app.exec_()
