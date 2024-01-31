""" etc """
from CanDesigner import Ui_Form
from PyQt5 import QtWidgets, QtCore
from PyQt5.QtWidgets import QFileDialog, QInputDialog, QLineEdit
import pandas as pd
import ParseDbc


# can window
class CanWidget(QtWidgets.QMainWindow, Ui_Form):
    """can window"""

    def __init__(self):
        super(QtWidgets.QMainWindow, self).__init__()  # Call QMainWindow's constructor
        self.setupUi(self)

        self.dbc_json = {}
        self.safcih_json = {}
        self.signals_selected_message = {}
        self.fd_signals = None

        self.first_signal = True
        self.prev_stop_bit = 0
        self.prev_start_bit = 0
        self.prev_length = 0
        self.number_no_used_bits = 1
        self.reserved_bits = 0
        self.stop_bit = 0

        self.treeWidget_dbc_signals.itemDoubleClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.treeWidget_dbc_signals.itemClicked.connect(
            self.tree_item_double_clicked_add_signal
        )

        self.listWidget_selected_signals.itemDoubleClicked.connect(
            self.list_item_double_clicked
        )
        self.listWidget_selected_signals.itemClicked.connect(self.describes)
        self.listWidget_safcih_signals.itemClicked.connect(self.describes)
        self.listWidget_confirmed_signals.itemDoubleClicked.connect(
            lambda: self.listWidget_confirmed_signals.takeItem(
                self.listWidget_confirmed_signals.currentRow()
            )
        )

        self.pushButton_1_select_dbc.clicked.connect(self.open_explorer_dbc)
        self.pushButton_2_generate.clicked.connect(self.generate)
        self.pushButton_3_select_all_messages.clicked.connect(self.select_all_messages)
        self.pushButton_4_select_excell.clicked.connect(self.fd_open_explorer)

    def closeEvent(self, event):
        event.accept()

    def select_all_messages(self):
        """all messages add from messages to confirmed"""
        self.listWidget_confirmed_signals.clear()
        for row_number in range(self.treeWidget_dbc_signals.topLevelItemCount()):
            item = self.treeWidget_dbc_signals.topLevelItem(row_number)
            self.listWidget_confirmed_signals.addItem(item.text(0))
        return

    def write_struct_to_file(self, header_file, type_def, signal_name, length):
        """a"""
        header_file.write(
            "\n\t" + type_def + " " + str(signal_name) + " : " + str(length) + " ;"
        )
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

    def write_struct_motorola(self, file, signal):
        """a"""
        if self.first_signal:
            self.write_struct_to_file(
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
            self.write_struct_to_file(
                file,
                self.get_uint_type(self.reserved_bits),
                "NoUsedBits" + str(self.number_no_used_bits),
                self.reserved_bits,
            )
            self.write_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
            self.number_no_used_bits += 1
        else:
            self.write_struct_to_file(
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
        """a"""
        self.stop_bit = int(signal["signal_start"]) + int(signal["signal_length"]) - 1

        if self.first_signal is True:
            self.write_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )

        elif (self.prev_start_bit + self.prev_length) < int(signal["signal_start"]):
            self.reserved_bits = int(signal["signal_start"]) - self.prev_stop_bit - 1
            uint_type = self.get_uint_type(self.reserved_bits)
            self.write_struct_to_file(
                file,
                uint_type,
                "NoUsedBits" + str(self.number_no_used_bits),
                self.reserved_bits,
            )
            self.write_struct_to_file(
                file,
                signal["signal_type_def"],
                signal["signal_name"],
                signal["signal_length"],
            )
            self.number_no_used_bits += 1

        else:
            self.write_struct_to_file(
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

    def write_get(self, file):
        """a"""
        file.write("\n\n//get macros\n")
        for row_number in range(self.listWidget_confirmed_signals.count()):
            message = self.dbc_json[
                self.listWidget_confirmed_signals.item(row_number).text()
            ]
            prefix = str(self.lineEdit_1_prefix.text())
            if len(prefix) != 0:
                prefix = prefix + "_" + message["message_name"]
            else:
                prefix = message["message_name"]
            if message["sender"] != "VCU":
                for signal in message["signals"]:
                    file.write(
                        "#define get_"
                        + signal["signal_name"]
                        + "()"
                        + " float32( "
                        + prefix
                        + "."
                        + signal["signal_name"]
                        + "*"
                        + signal["signal_factor"]
                        + "+ ("
                        + signal["signal_offset"]
                        + ") )\n"
                    )
        return

    def write_set(self, file):
        """a"""
        file.write("\n\n//set macros\n")
        for row_number in range(self.listWidget_confirmed_signals.count()):
            message = self.dbc_json[
                self.listWidget_confirmed_signals.item(row_number).text()
            ]
            prefix = str(self.lineEdit_1_prefix.text())
            if len(prefix) != 0:
                prefix = prefix + "_" + message["message_name"]
            else:
                prefix = message["message_name"]

            if message["sender"] == "VCU":
                for signal in message["signals"]:
                    file.write(
                        "#define set_"
                        + signal["signal_name"]
                        + "()"
                        + " ( "
                        + prefix
                        + "."
                        + signal["signal_name"]
                        + " )\n"
                    )
        return

    def generate(self):
        """to header file generate ask file name and go"""
        header_name, ok = QInputDialog.getText(
            self, "Input Dialog", "Enter header file name:"
        )
        if ok:
            header_name = header_name + ".h"
            with open(header_name, "w") as file:
                file.write(
                    "\n#ifndef FEV_VCU_DATA_H\n#define FEV_VCU_DATA_H\n#include <stdint.h>  //Include for UINT32 type\n\n"
                )
                self.write_get(file)
                self.write_set(file)

                for row_number in range(self.listWidget_confirmed_signals.count()):
                    message = self.dbc_json[
                        self.listWidget_confirmed_signals.item(row_number).text()
                    ]
                    prefix = str(self.lineEdit_1_prefix.text())

                    if len(prefix) != 0:
                        prefix = prefix + "_" + message["message_name"]
                    else:
                        prefix = message["message_name"]
                    self.first_signal = True
                    self.prev_stop_bit = 0
                    self.prev_start_bit = 0
                    self.prev_length = 0
                    self.number_no_used_bits = 1
                    self.reserved_bits = 0
                    self.stop_bit = 0

                    file.write("\ntypedef struct {")  # start signals definition

                    for signal in message["signals"]:
                        if signal["signal_endian"] == "Big Endian[0-motorola]":
                            self.write_struct_motorola(file, signal)
                        else:
                            self.write_struct_intel(file, signal)
                        self.first_signal = False
                    file.write("\n} " + prefix + " ;\n\n")

                file.write("\n\n#endif  // FEV_VCU_DATA_H")
            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage("info : Structs have been created ")
            self.listWidget_confirmed_signals.clear()
            return
        else:
            self.statusBar().setStyleSheet("background-color : orange")
            self.statusBar().showMessage("Error : header can not generate ")

    def describe_SafCIH(self, signal):
        self.tableWidget_display_signals.item(0, 0).setText(signal["Name"])
        self.tableWidget_display_signals.item(0, 2).setText(signal["Min"])
        self.tableWidget_display_signals.item(0, 3).setText(signal["Max"])
        self.tableWidget_display_signals.item(0, 1).setText("None")
        self.tableWidget_display_signals.item(0, 4).setText("none")
        self.tableWidget_display_signals_2.item(0, 0).setText(
            str(signal["Description"])
            + ",  StorageClass: "
            + str(signal["StorageClass"])
            + ", Typedef: "
            + str(signal["Typedef"])
        )
        return

    def describe_selected(self, signal):
        self.tableWidget_display_signals.item(0, 0).setText(signal["signal_name"])
        self.tableWidget_display_signals.item(0, 2).setText(signal["signal_min"])
        self.tableWidget_display_signals.item(0, 3).setText(signal["signal_max"])
        self.tableWidget_display_signals.item(0, 1).setText(signal["signal_factor"])
        self.tableWidget_display_signals.item(0, 4).setText(signal["signal_offset"])
        try:
            self.tableWidget_display_signals_2.item(0, 0).setText(signal["comment"])
        except:
            self.statusBar().setStyleSheet("background-color : orange")
            self.statusBar().showMessage(
                "exception occured : signal has not got comment"
            )
        return

    def describes_dbc(self, signal):
        try:
            self.tableWidget_display_signals.item(0, 0).setText(signal["signal_name"])
            self.tableWidget_display_signals.item(0, 2).setText(signal["signal_min"])
            self.tableWidget_display_signals.item(0, 3).setText(signal["signal_max"])
            self.tableWidget_display_signals.item(0, 1).setText(signal["signal_factor"])
            self.tableWidget_display_signals.item(0, 4).setText(signal["signal_offset"])

            self.tableWidget_display_signals_2.item(0, 0).setText(signal["comment"])
        except Exception as e:
            self.statusBar().setStyleSheet("background-color : orange")
            self.statusBar().showMessage(
                "exception occured : signal has not got comment" + str(e)
            )
            print(e)
        self.tableWidget_display_signals.resizeRowsToContents()
        self.tableWidget_display_signals.resizeColumnsToContents()
        self.tableWidget_display_signals_2.resizeRowsToContents()
        self.tableWidget_display_signals_2.resizeColumnsToContents()
        return

    def describes(self, item):
        """display signal attributes"""
        if self.sender() is self.listWidget_selected_signals:
            self.describe_selected(self.signals_selected_message[item.text()])
        elif self.sender() is self.treeWidget_dbc_signals:
            self.describes_dbc(self.dbc_json[item.text(0)])
        else:
            self.describe_SafCIH(self.safcih_json[str(item.text())])
        self.tableWidget_display_signals.resizeColumnsToContents()
        self.tableWidget_display_signals_2.resizeColumnsToContents()
        return

    def list_item_double_clicked(self, item):
        """a"""
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
                self.listWidget_selected_signals.clear()
                for row_number in range(self.listWidget_confirmed_signals.count()):
                    row = self.listWidget_confirmed_signals.item(row_number)
                    if item.text(0) == row.text():
                        confirmed_or_not = False

                if confirmed_or_not:
                    self.listWidget_confirmed_signals.addItem(item.text(0))

                for signal in self.dbc_json[item.text(0)]["signals"]:
                    self.listWidget_selected_signals.addItem(signal["signal_name"])
                    self.add_selected_message(signal)
                return
        else:
            for signal in self.dbc_json[item.parent().text(0)]["signals"]:
                if item.text(0) == signal["signal_name"]:
                    self.describes_dbc(signal)
                    return

    def open_explorer_dbc(self):
        """a window to select dbc file"""
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

                for signal in self.dbc_json[message_name]["signals"]:
                    child_item = QtWidgets.QTreeWidgetItem(
                        item_0, [str(signal["signal_name"])]
                    )
                    item_0.addChild(child_item)

                self.treeWidget_dbc_signals.topLevelItem(order).setText(0, message_name)
                order += 1

            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage("Info : File Exprolere is Opened.")
            return
        except Exception as e:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "Error : An error occurred when the file was openning"
            )
            print(e)
            return

    def fd_open_explorer(self):
        """to import matlab exported excell"""
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail

            path = dialog.getOpenFileName(None, "FD Open File", "", "(*.xlsx)")

            self.fd_signals = self.fd_open_excel_as_pandas_frame(
                self.get_file_name_and_path_as_str(path)
            )

            if self.fd_signals is None:
                return  # if the sheet wont select

            self.fd_signals = self.fd_signals.to_dict(orient="records")

            prefix, ok = QInputDialog.getText(
                self,
                "Input Dialog",
                "Enter prefix to import signals:",
                QLineEdit.Normal,
                "",
            )
            if ok == True:
                self.listWidget_safcih_signals.clear()
                for row in self.fd_signals:
                    if (
                        prefix in row["Name"]
                    ):  # if the prefix was not given all signals will add
                        self.safcih_json[row["Name"]] = row
                        self.listWidget_safcih_signals.addItem(row["Name"])
                self.statusBar().setStyleSheet("background-color : lightgreen")
                self.statusBar().showMessage(" Info : File Exprolere is Opened.")
                return
            else:
                self.statusBar().setStyleSheet("background-color : orange")
                self.statusBar().showMessage(" Info : Prefix was not selected .")
                return

        except Exception as e:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "Error : An error occurred when the file was openning"
            )
            print(e)

    def get_file_name_and_path_as_str(self, path):
        path = "".join(path)
        file_name = path.split("/")[-1]
        file_name = file_name.replace("(*.xlsx)", "")
        path = path.replace("(*.xlsx)", "")
        return path

    def fd_open_excel_as_pandas_frame(self, file_path):
        try:
            temp = pd.ExcelFile(file_path)
            self.sheet_name = self.get_sheet_name(temp.sheet_names)
            if self.sheet_name is None:
                return None
            df = pd.read_excel(file_path, self.sheet_name)
            return df
        except Exception as e:
            print("hata :", e)
            return

    def get_sheet_name(self, sheet_names):
        selected_sheet, ok = QInputDialog.getItem(
            None, "Select sheet", "sheet Names", sheet_names, 0, False
        )
        if ok:
            return selected_sheet
        else:
            self.statusBar().setStyleSheet("background-color : orange")
            self.statusBar().showMessage(" Info : Sheet name was not selected .")
            return None
