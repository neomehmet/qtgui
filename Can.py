""" etc """

from CanDesigner import Ui_Form
from PyQt5 import QtWidgets, QtCore
from PyQt5.QtWidgets import QFileDialog, QInputDialog, QLineEdit
import pandas as pd
import ParseDbc


class BSWIOData:
    def __init__(self):
        self.file_path = None
        self.sheets_names = None
        self.selected_sheet = None
        self.columns_names = None
        self.selected_colon = None
        self.bswio_signals = None
        self.prefix = ""

        dialog = QFileDialog()
        dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
        self.file_path = self.get_file_name_and_path_as_str(
            dialog.getOpenFileName(None, "FD Open File", "", "(*.xlsx)")
        )

        self.load_data()
        self.select_sheet()
        self.select_column()

    def excell_data_to_list(self):
        self.bswio_signals = self.bswio_signals.parse(self.selected_sheet).to_dict(
            orient="records"
        )

    def get_file_name_and_path_as_str(self, path):
        path = "".join(path)
        file_name = path.split("/")[-1]
        file_name = file_name.replace("(*.xlsx)", "")
        path = path.replace("(*.xlsx)", "")
        return path

    def load_data(self):
        """Load Excel data from file_path."""
        self.bswio_signals = pd.ExcelFile(self.file_path)

    def select_sheet(self):
        """Select a sheet by name."""
        self.sheets_names = self.bswio_signals.sheet_names
        self.selected_sheet, ok = QInputDialog.getItem(
            None, "Select sheet", "sheet Names", self.sheets_names, 0, False
        )

    def select_column(self):
        """Select a column by name."""
        self.columns_names = self.bswio_signals.parse(
            self.selected_sheet
        ).columns.tolist()
        self.selected_colon, ok = QInputDialog.getItem(
            None,
            "Select column",
            "column Names",
            self.columns_names,
            0,
            False,
        )


# can window
class CanWidget(QtWidgets.QMainWindow, Ui_Form):
    """can window"""

    def __init__(self, parent):
        super(QtWidgets.QMainWindow, self).__init__()  # Call QMainWindow's constructor
        self.setupUi(self)
        self.main_window = parent
        self.dbc_json = {}
        self.exported_json = {}
        self.signals_selected_message = {}
        self.bswio_signals = None

        self.first_signal = True
        self.prev_stop_bit = 0
        self.prev_start_bit = 0
        self.prev_length = 0
        self.number_no_used_bits = 1
        self.reserved_bits = 0
        self.stop_bit = 0

        self.treeWidget_dbc_signals.setDragEnabled(True)
        self.treeWidget_safcih_signals.setDragEnabled(True)
        self.treeWidget_selected_signals.setAcceptDrops(True)

        self.treeWidget_dbc_signals.itemDoubleClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.treeWidget_dbc_signals.itemClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.treeWidget_dbc_signals.itemPressed.connect(self.handle_item_pressed)

        self.treeWidget_safcih_signals.itemPressed.connect(self.handle_item_pressed)

        self.treeWidget_safcih_signals.itemClicked.connect(self.describes)
        self.treeWidget_confirmed_signals.itemDoubleClicked.connect(
            lambda: self.treeWidget_confirmed_signals.takeTopLevelItem(
                self.treeWidget_confirmed_signals.currentIndex().row()
            )
        )  # to remove item
        self.treeWidget_selected_signals.itemDoubleClicked.connect(
            lambda: self.treeWidget_selected_signals.takeTopLevelItem(
                self.treeWidget_selected_signals.currentIndex().row()
            )
        )  # to remove item

        self.pushButton_1_select_dbc.clicked.connect(self.open_explorer_dbc)
        # self.pushButton_2_generate.clicked.connect(self.generate)
        self.pushButton_3_select_all_messages.clicked.connect(self.select_all_messages)
        self.pushButton_4_select_excell.clicked.connect(self.excell_open_explorer2)
        self.pushButton_5_clear_bswio_signals.clicked.connect(self.clear_widget)
        self.pushButton_6_clear_msg.clicked.connect(self.clear_widget)
        self.pushButton_7_clear_signals_pair.clicked.connect(self.clear_widget)
        self.pushButton_8_clear_cnfrmed.clicked.connect(self.clear_widget)
        self.pushButton_9_generate_h_from_dbc.clicked.connect(self.generate_h_from_dbc)

    def closeEvent(self, event):
        """Display a confirmation dialog before closing the window"""
        reply = QtWidgets.QMessageBox.question(
            self,
            "Confirm",
            "Are you sure you want to close the window?",
            QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No,
            QtWidgets.QMessageBox.No,
        )
        if reply == QtWidgets.QMessageBox.Yes:
            # Close and destroy the CanWidget instance
            self.destroy()
            # Close the main window
            event.accept()
            self.main_window.showNormal()
        else:
            # Do not close the main window
            event.ignore()

    def handle_item_pressed(self, item):
        if not item.parent():  # parent # stop dragging parent
            self.treeWidget_dbc_signals.setDragDropMode(
                QtWidgets.QAbstractItemView.NoDragDrop
            )
            self.treeWidget_safcih_signals.setDragDropMode(
                QtWidgets.QAbstractItemView.NoDragDrop
            )
        else:  # child # allow dragging child
            self.treeWidget_dbc_signals.setDragEnabled(True)
            self.treeWidget_safcih_signals.setDragEnabled(True)

    def clear_widget(self):  # clear buttons
        """first check which button is clicked then
        remove widget items and dictionary"""
        if self.sender().objectName() == "pushButton_6_clear_msg":
            self.treeWidget_dbc_signals.clear()
            self.dbc_json.clear()
        elif self.sender().objectName() == "pushButton_5_clear_bswio_signals":
            self.treeWidget_safcih_signals.clear()
            self.exported_json.clear()
        elif self.sender().objectName() == "pushButton_7_clear_signals_pair":
            self.treeWidget_selected_signals.clear()
            # buraya varsa selected dict silme gelecek
        elif self.sender().objectName() == "pushButton_8_clear_cnfrmed":
            self.treeWidget_confirmed_signals.clear()
            # buraya varsa confirmed dict silme gelecek

    def select_all_messages(self):
        """all messages add from messages to confirmed"""
        self.treeWidget_confirmed_signals.clear()
        order = 0
        for row_number in range(self.treeWidget_dbc_signals.topLevelItemCount()):
            # item = self.treeWidget_dbc_signals.topLevelItem(row_number).text(0)
            new_item = QtWidgets.QTreeWidgetItem(
                [self.treeWidget_dbc_signals.topLevelItem(row_number).text(0)]
            )
            self.treeWidget_confirmed_signals.insertTopLevelItem(0, new_item)
            order += 1
        return

    def get_uint_type(self, reserved_bits):
        """to detect are there any reserved bits when the signals ara will write to header"""
        if reserved_bits <= 8:
            uint_type = "uint8"
        elif reserved_bits <= 16:
            uint_type = "uint16"
        elif reserved_bits <= 32:
            uint_type = "uint32"
        else:
            uint_type = "uint64"
        return uint_type

    def write_in_struct_to_file(self, header_file, type_def, signal_name, length):
        """# to add signals as bits in a struct"""
        header_file.write(
            "\n\t\t"
            + "uint64"
            + " "
            + str(signal_name)
            + "_phy"
            + " : "
            + str(length)
            + ";"
        )
        return

    def write_struct_motorola(self, file, signal):
        """..."""
        if self.first_signal:
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
        elif int(self.prev_stop_bit) + int(signal["signal_length"]) < int(
            signal["signal_stop"]
        ):
            self.reserved_bits = (
                int(signal["signal_stop"])
                - int(signal["signal_length"])
                - int(self.prev_stop_bit)
            )
            self.write_in_struct_to_file(
                file,
                self.get_uint_type(self.reserved_bits),
                "NoUsedBits" + str(self.number_no_used_bits),
                self.reserved_bits,
            )
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
            self.number_no_used_bits += 1
        else:
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
        self.reserved_bits = (
            int(signal["signal_stop"])
            - int(signal["signal_length"])
            - int(self.prev_stop_bit)
        )

        self.prev_stop_bit = signal["signal_stop"]
        self.first_signal = False
        return

    def write_struct_intel(self, file, signal):
        """..."""
        self.stop_bit = int(signal["signal_start"]) + int(signal["signal_length"]) - 1

        if self.first_signal is True:
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
        elif (self.prev_start_bit + self.prev_length) < int(signal["signal_start"]):
            self.reserved_bits = int(signal["signal_start"]) - self.prev_stop_bit - 1
            uint_type = self.get_uint_type(self.reserved_bits)
            self.write_in_struct_to_file(
                file,
                uint_type,
                "NoUsedBits" + str(self.number_no_used_bits),
                self.reserved_bits,
            )
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
            self.number_no_used_bits += 1
        else:
            self.write_in_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )

        self.prev_stop_bit, self.prev_start_bit, self.prev_length, self.first_signal = (
            int(self.stop_bit),
            int(signal["signal_start"]),
            int(signal["signal_length"]),
            False,
        )
        return

    def write_get(self, file):  # to write get macros to header
        """..."""
        file.write("\n\n//get macros\n")
        file.write(
            "\nvoid getIntelSignal(uint64_t* dest, uint64_t* source, uint8_t sigStart, uint8_t sigLen){\n"
            + "\tuint64_t mask = ( (1ULL << sigLen) - 1) << sigStart ;\n"
            + "\t*dest &= ~(mask);\n"
            + "\t*dest |= (mask && (*source));\n}\n"
        )

        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]  # self.treeWidget_confirmed_signals.item(row_number).text(0)

            if message["sender"] != "VCU":
                file.write(
                    "\nget_CAN_" + message["message_name"] + "(uint64_t * dataPtr){\n"
                )  # dataPtr is used source here
                for signal in message["signals"]:
                    file.write(
                        "\tgetIntelSignal(&CAN_"
                        + message["message_name"]
                        + "->MsgData.rawData"
                        + ", dataPtr, "
                        + signal["signal_start"]
                        + ", "
                        + signal["signal_length"]
                        + ");\n"
                    )
                file.write("}\n")
        return

    def write_set(self, file):  # to write set macros to header
        """..."""
        file.write("\n\n//set func define\n")
        file.write(
            "///mask is consist 1 as size as signal size \n"
            + "///then mask is shifted to signals start \n"
            + "///then data and mask is done with AND \n"
            + "///so it is going to write to destination via OR operation"
            + "\nvoid setIntelSignal(uint64_t* data, uint64_t* dest, uint8_t sigStart, uint8_t sigLen){\n"
            + "\tuint64_t mask = ((1ULL << sigLen) - 1) << sigStart ;\n"
            + "\t*dest &= ~(mask);\n"
            + "\t*dest |= (mask && (*data));\n}\n\n"
        )

        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]
            if message["sender"] == "VCU":
                file.write(
                    "\nset_CAN_" + message["message_name"] + "(uint64_t * dataPtr){\n"
                )
                for signal in message["signals"]:
                    file.write(
                        "\tsetIntelMsg( dataPtr, &CAN_"
                        + message["message_name"]
                        + "->MsgData.rawData"
                        + ", "
                        + signal["signal_start"]
                        + ", "
                        + signal["signal_length"]
                        + ");\n"
                    )
                file.write("}\n")
        return

    def write_header_create_struct(self, file):
        file.write("\n\n// messages as union created below")
        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]
            self.first_signal = True
            self.prev_stop_bit = 0
            self.prev_start_bit = 0
            self.prev_length = 0
            self.number_no_used_bits = 1
            self.reserved_bits = 0
            self.stop_bit = 0

            file.write(
                "\ntypedef union{"
                + "\n\tuint8 raw_data["
                + str(message["message_length_as_byte"])
                + "];\n\ttypedef struct{"
            )
            for signal in message["signals"]:
                if signal["signal_endian"] == "Big Endian[0-motorola]":
                    self.write_struct_motorola(file, signal)
                else:
                    self.write_struct_intel(file, signal)
                self.first_signal = False
            file.write(
                "\n\t}signals;" "\n}CAN_" + str(message["message_name"]) + "_DATA_t;\n"
            )

        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]
            file.write(
                "\n\ntypedef struct{"
                "\n\tuint8 "
                + message["message_name"]
                + "_DLC = "
                + str(message["message_name"])
                + "_DLC;\n\tuint16 "
                + message["message_name"]
                + "_ID = "
                + str(message["message_name"])
                + "_ID;\n\tCAN_"
                + str(message["message_name"])
                + "_DATA_t  MsgData; \n} CAN_"
                + str(message["message_name"])
                + "_t;"
            )
        return

    def write_header_dlc_and_id(self, file):
        file.write("\n// ID and DLC defines //")
        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]
            file.write(
                "\n#define "
                + str(message["message_name"])
                + "_DLC "
                + str(message["message_length_as_byte"])
                + "\n#define "
                + message["message_name"]
                + "_ID "
                + str(message["message_id"])
            )
        return

    def write_header_create_msg_var(self, file):
        file.write("\n\n// variables define below ##")
        for row_number in range(self.treeWidget_confirmed_signals.topLevelItemCount()):
            message = self.dbc_json[
                self.treeWidget_confirmed_signals.topLevelItem(row_number).text(0)
            ]
            file.write(
                "\nCAN_"
                + str(message["message_name"])
                + "_t CAN_"
                + str(message["message_name"]).upper()
                + ";"
            )
        return

    def generate_h_from_dbc(self):
        # to generate header file messages structs and its signals define as struct attributes, set and get macros from dbc
        """to header file generate ask file name and go"""
        header_name, ok = QInputDialog.getText(
            self, "Input Dialog", "Enter header file name:"
        )
        # self.generate_source_from_dbc()
        if ok:
            header_name = header_name + ".h"
            with open(header_name, "w") as file:
                file.write(
                    "\n#ifndef FEV_VCU_DATA_H\n#define FEV_VCU_DATA_H\n#include <stdint.h>  //Include for UINT32 type\n\n"
                )

                self.write_get(file)
                self.write_set(file)
                self.write_header_dlc_and_id(file)
                self.write_header_create_struct(file)
                self.write_header_create_msg_var(file)

                file.write("\n\n#endif  // FEV_VCU_DATA_H")

            self.update_status_bar("info : Structs have been created .", "lightgreen")
            self.treeWidget_confirmed_signals.clear()
            return
        else:
            self.update_status_bar("Error : header can not generate .", "crimson")

    def describe_SafCIH(self, signal):
        """ this func is not necessary anymore"""
        """
        self.tableWidget_display_signals.item(0, 0).setText(signal[str(self.bswio.selected_colon)])
        self.tableWidget_display_signals.item(0, 2).setText(signal["Min"])
        self.tableWidget_display_signals.item(0, 3).setText(signal["Max"])
        self.tableWidget_display_signals.item(0, 1).setText(signal["Offset"])
        self.tableWidget_display_signals.item(0, 4).setText("none")"""
        data = ""
        for key, value in signal.items():
            data += str(key) + ": " + str(value) + "\n"
        self.textBrowser.setPlainText(data)
        return

    def describes_dbc(self, signal):
        """ this func is not necessary anymore"""
        try:
            """self.tableWidget_display_signals.item(0, 0).setText(signal["signal_name"])
            self.tableWidget_display_signals.item(0, 2).setText(signal["signal_min"])
            self.tableWidget_display_signals.item(0, 3).setText(signal["signal_max"])
            self.tableWidget_display_signals.item(0, 1).setText(signal["signal_factor"])
            self.tableWidget_display_signals.item(0, 4).setText(signal["signal_offset"])
            """
            data = ""
            for key, value in signal.items():
                data += str(key) + ": " + str(value) + "\n"
            self.textBrowser.setPlainText(data)
        except Exception as e:
            report = "exception occured : signal has not got comment" + str(e)
            self.update_status_bar(report, "orange")
        return

    def describes(self, item):
        """display signal attributes"""
        if self.sender() is self.treeWidget_dbc_signals:
            # self.describes_dbc(self.dbc_json[item.text(0)])
            signal = self.dbc_json[item.text(0)]
        else:
            if item.parent():  # if child is clicked
                # self.describe_SafCIH(self.exported_json[str(item.text(0))]  )
                signal = self.exported_json[str(item.text(0))]
        data = ""
        for key, value in signal.items():
            data += str(key) + ": " + str(value) + "\n"
        self.textBrowser.setPlainText(data)
        return

    def add_selected_message(self, signal):
        if signal["signal_endian"] == "Big Endian[0-motorola]":
            self.signals_selected_message[signal["signal_name"]] = {
                "signal_name": signal["signal_name"],
                "signal_stop": signal["signal_stop"],
                "signal_length": signal["signal_length"],
                "signal_endian": signal["signal_endian"],
                "signal_type_def": signal["signal_type_def"],
                "signal_factor": signal["signal_factor"],
                "signal_offset": signal["signal_offset"],
                "signal_min": signal["signal_min"],
                "signal_max": signal["signal_max"],
                "signal_unit": signal["signal_unit"],
                "signal_receiving_node": signal["signal_receiving_node"],
                "comment": str(signal["comment"]),
            }
        else:
            self.signals_selected_message[signal["signal_name"]] = {
                "signal_name": signal["signal_name"],
                "signal_start": signal["signal_start"],
                "signal_length": signal["signal_length"],
                "signal_endian": signal["signal_endian"],
                "signal_type_def": signal["signal_type_def"],
                "signal_factor": signal["signal_factor"],
                "signal_offset": signal["signal_offset"],
                "signal_min": signal["signal_min"],
                "signal_max": signal["signal_max"],
                "signal_unit": signal["signal_unit"],
                "signal_receiving_node": signal["signal_receiving_node"],
                "comment": str(signal["comment"]),
            }
        return

    def tree_item_double_clicked_add_signal(self, item):
        """the signals add to listWidget_selected for describing from messages part"""
        if not item.parent():  # when parent clicked run this block
            event = QtWidgets.QApplication.mouseButtons()
            if event == QtCore.Qt.LeftButton:  # left click control
                # did the signal selected before it controls below
                confirmed_or_not = True
                self.treeWidget_selected_signals.clear()
                if confirmed_or_not:
                    new_item = QtWidgets.QTreeWidgetItem([item.text(0)])
                    self.treeWidget_confirmed_signals.insertTopLevelItem(0, new_item)

                for signal in self.dbc_json[item.text(0)]["signals"]:
                    new_item = QtWidgets.QTreeWidgetItem([signal["signal_name"]])
                    self.treeWidget_selected_signals.insertTopLevelItem(0, new_item)
                    self.add_selected_message(signal)
                return
        else:
            for signal in self.dbc_json[item.parent().text(0)]["signals"]:
                if item.text(0) == signal["signal_name"]:
                    self.describes_dbc(signal)
                    return

    def open_explorer_dbc(self):
        """Select and parse a DBC file."""
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
            path = dialog.getOpenFileName(
                None, "Open File", "", "(*.dbc)"
            )  # to select file
            if not path:
                self.update_status_bar("info : No path found", "crimson")
            self.dbc_json = ParseDbc.parse(path[0])  # parse file name from full path
            self.treeWidget_dbc_signals.clear()
            for message_name in self.dbc_json:  # dbc_json keys correspond message name
                # to add messages from .dbc to treeWidget_dbc
                # HERE IF SENDER VCU İN PARENT IF NOT SENDER VCU OUT
                item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_dbc_signals)
                item_0.setText(0, message_name)
                for signal in self.dbc_json[message_name]["signals"]:
                    child_item = QtWidgets.QTreeWidgetItem(
                        item_0, [str(signal["signal_name"])]
                    )
                    item_0.addChild(child_item)  #  add a signal to its message
                self.treeWidget_dbc_signals.addTopLevelItem(item_0)
            self.update_status_bar("Error : Succesfull .", "lightgreen")
            return
        except Exception as e:
            report = "Error : An error occurred when the file was openning , " + str(e)
            self.update_status_bar(report, "crimson")
            return

    def excell_open_explorer2(self):

        self.bswio = BSWIOData()  # create and get sheet and column
        prefix, ok = QInputDialog.getText(
            self,
            "Input Dialog",
            "Enter prefix to import signals:",
            QLineEdit.Normal,
            "",
        )
        self.bswio.prefix = prefix
        self.bswio.excell_data_to_list()
        self.bswio_signals = self.bswio

        item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_safcih_signals)
        item_0.setText(0, str(self.bswio.selected_sheet))
        for signal in self.bswio.bswio_signals:  ## prefixi regex yapabiliriz....
            if (
                str(self.bswio.prefix) in signal[str(self.bswio.selected_colon)]
            ):  #  all signals will add, if the prefix was not given
                self.exported_json[signal[self.bswio.selected_colon]] = (
                    signal  # create a dictionary to store bsw signals
                )
                child_item = QtWidgets.QTreeWidgetItem(
                    item_0, [signal[self.bswio.selected_colon]]
                )
                item_0.addChild(child_item)
        items = self.treeWidget_safcih_signals.findItems(
            self.bswio.selected_sheet, QtCore.Qt.MatchExactly
        )
        for item in items:  # check if parent already exist and delete it
            if item.text(0) == self.bswio.selected_sheet:
                self.treeWidget_safcih_signals.takeTopLevelItem(
                    self.treeWidget_safcih_signals.indexOfTopLevelItem(item)
                )
        self.treeWidget_safcih_signals.addTopLevelItem(item_0)
        self.update_status_bar(" Info : File Exprolere is Opened.", "lightgreen")

    def excell_open_explorer(self):
        """to import matlab exported excell"""
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
            path = self.get_file_name_and_path_as_str(
                dialog.getOpenFileName(None, "FD Open File", "", "(*.xlsx)")
            )

            excell_bswio = pd.ExcelFile(path)

            selected_sheet, ok = QInputDialog.getItem(
                None, "Select sheet", "sheet Names", excell_bswio.sheet_names, 0, False
            )

            if not ok:
                self.update_status_bar(" Info : Sheet was not selected .", "orange")
                return
            selected_colon, ok = QInputDialog.getItem(
                None,
                "Select column",
                "column Names",
                excell_bswio.parse(selected_sheet).columns.tolist(),
                0,
                False,
            )
            if not ok:
                self.update_status_bar(" Info : Colon was not selected .", "orange")
                return

            temp_bswio = excell_bswio.parse(selected_sheet)  # it is a dataframe
            self.bswio_signals = temp_bswio.to_dict(orient="records")
            print(type(self.bswio_signals))
            prefix, ok = QInputDialog.getText(
                self,
                "Input Dialog",
                "Enter prefix to import signals:",
                QLineEdit.Normal,
                "",
            )

            if ok:
                item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_safcih_signals)
                item_0.setText(0, str(selected_sheet))
                for signal in self.bswio_signals:  ## prefixi regex yapabiliriz....
                    if (
                        prefix in signal[selected_colon]
                    ):  #  all signals will add, if the prefix was not given
                        self.exported_json[signal[selected_colon]] = (
                            signal  # create a dictionary to store bsw signals
                        )
                        child_item = QtWidgets.QTreeWidgetItem(
                            item_0, [signal[selected_colon]]
                        )
                        item_0.addChild(child_item)
                items = self.treeWidget_safcih_signals.findItems(
                    selected_sheet, QtCore.Qt.MatchExactly
                )
                for item in items:  # check if parent already exist and delete it
                    if item.text(0) == selected_sheet:
                        self.treeWidget_safcih_signals.takeTopLevelItem(
                            self.treeWidget_safcih_signals.indexOfTopLevelItem(item)
                        )
                self.treeWidget_safcih_signals.addTopLevelItem(item_0)
                self.update_status_bar(
                    " Info : File Exprolere is Opened.", "lightgreen"
                )
                return
            else:
                self.update_status_bar(" Info : Prefix was not selected .", "orange")
                return
        except Exception as e:
            report = "exception occured : " + str(e)
            self.update_status_bar(report, "crimson")

    def get_file_name_and_path_as_str(self, path):
        path = "".join(path)
        file_name = path.split("/")[-1]
        file_name = file_name.replace("(*.xlsx)", "")
        path = path.replace("(*.xlsx)", "")
        return path

    def open_excel_as_pandas_frame(self, file_path):
        try:
            temp = pd.ExcelFile(file_path)
            sheet_name = self.get_sheet_name(temp.sheet_names)

            if sheet_name is None:
                return None
            df = pd.read_excel(file_path, sheet_name)
            return (
                df,
                sheet_name,
            )

        except Exception as e:
            report = "exception occured  while reading excel data." + str(e)
            self.update_status_bar(report, "crimson")
            return

    def get_sheet_name(self, sheet_names):
        selected_sheet, ok = QInputDialog.getItem(
            None, "Select sheet", "sheet Names", sheet_names, 0, False
        )
        if ok:
            return selected_sheet
        else:
            self.update_status_bar(" Info : Sheet name was not selected .", "orange")
            return None

    def update_status_bar(self, report, color):
        """color : crimson error,
        lightgreen success,
        orange information"""
        self.statusBar().setStyleSheet(f"background-color : {color}")
        self.statusBar().showMessage(report)

    def generate_source_from_dbc(self):
        priv_heade = list()
        with open("source_rte_func_call.c", "w") as file:
            for message in self.dbc_json:
                message = self.dbc_json[message]
                if "VCU" in message["sender"]:
                    func_signature = str(
                        "void tx_"
                        + message["sender"]
                        + "_msg_"
                        + message["message_name"]
                        + "(void)"
                    )
                    priv_heade.append(func_signature)
                    file.write("\n\n" + func_signature + "\n{\n")
                    for signal in message[
                        "signals"
                    ]:  # RTE_tx_VCU_messageName_signalName(&temp_messageName_signalName)
                        file.write(
                            "\tRTE_tx_"
                            + message["sender"]
                            + "_msg_"
                            + message["message_name"]
                            + "_"
                            + signal["signal_name"]
                            + "( set_"
                            + message["message_name"]
                            + "_"
                            + signal["signal_name"]
                            + "() );\n"
                        )  # write icine direk ürettigim fonksyionlari da yazabiliriz galiba emin olamadim
                else:  # receiver VCU
                    func_signature = str(
                        "void rx_X_tx_"
                        + message["sender"]
                        + "_msg_"
                        + message["message_name"]
                        + "(void)"
                    )
                    file.write("\n\n" + func_signature + "\n{\n")
                    priv_heade.append(func_signature)
                    for signal in message[
                        "signals"
                    ]:  # create temp var uintX temp_messageName_signalName
                        temp_var_sgnl = str(
                            "temp_"
                            + message["message_name"]
                            + "_"
                            + signal["signal_name"]
                        )
                        file.write(
                            "\t"
                            + signal["signal_type_def"]
                            + " "
                            + temp_var_sgnl
                            + " = 0;\n"
                        )
                    file.write("\n")
                    # now rte function body and pass the ref its  signals to it
                    for signal in message[
                        "signals"
                    ]:  # RTE_Sender_VCU_messageName_signalName(&temp_messageName_signalName)
                        temp_var_sgnl = str(
                            "temp_"
                            + message["message_name"]
                            + "_"
                            + signal["signal_name"]
                        )
                        file.write(
                            "\tRTE_rx_X_Sender_"
                            + message["sender"]
                            + "_msg_"
                            + message["message_name"]
                            + "_sgnl_"
                            + signal["signal_name"]
                            + "( &"
                            + temp_var_sgnl
                            + " );\n"
                        )
                file.write("\n}\n")
        with open("header_priv_signature_rte_func_call.h", "w") as file:
            for i in priv_heade:
                file.write(i + "\n")
        return
