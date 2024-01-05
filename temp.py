from PyQt5 import QtWidgets, QtCore
from can import Ui_MainWindow
from PyQt5.QtWidgets import QFileDialog, QHeaderView, QInputDialog
import pandas as pd


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)
        tabs = self.tabWidget
        self.fd = {}
        self.dbc = {}
        self.sheet_name = None
        self.confirmed_signals = list()

        tabs.tabCloseRequested.connect(self.close_tab)
        self.treeWidget_dbc_signals.itemDoubleClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.treeWidget_dbc_signals.itemClicked.connect(self.dbc_item_describes)
        self.listWidget_selected_signals.itemDoubleClicked.connect(
            self.list_item_double_clicked
        )

        self.treeWidget_fd_signals.itemDoubleClicked.connect(
            self.tree_item_double_clicked_add_signal
        )
        self.treeWidget_fd_signals.itemClicked.connect(self.fd_item_describes)
        self.listWidget_selected_signals.itemClicked.connect(self.signal_describes)
        self.listWidget_confirmed_signals.itemDoubleClicked.connect(
            self.confirmed_signal_remove
        )
        self.pushButton_1_select_dbc.clicked.connect(self.dbc_open_explorer)
        self.pushButton_2_select_fd.clicked.connect(self.fd_open_explorer)
        self.pushButton_3_confirm_specs.clicked.connect(self.confirm_specs)
        self.pushButton_4_generate.clicked.connect(self.generate_code)

    def confirmed_signal_remove(self):
        item = self.listWidget_confirmed_signals.takeItem(
            self.listWidget_confirmed_signals.currentRow()
        )
        for i in range(len(self.confirmed_signals[:])):
            try:
                if self.confirmed_signals[i]["Name"] in item.text():
                    self.confirmed_signals.pop(i)
                    self.statusBar().setStyleSheet("background-color : lightgreen ")
                    self.statusBar().showMessage("info : Signal removed")
                    return
            except Exception as err:
                self.statusBar().setStyleSheet("background-color : crimson ")
                self.statusBar().showMessage("exception occured : signal may not in fd")
            try:
                if self.confirmed_signals[i]["Signal Name"] in item.text():
                    self.confirmed_signals.pop(i)
                    self.statusBar().setStyleSheet("background-color : lightgreen ")
                    self.statusBar().showMessage("info : Signal removed")
                    return
            except Exception as err:
                self.statusBar().setStyleSheet("background-color : crimson ")
                self.statusBar().showMessage("exception occured :" + str(err))

    def generate_code(self):
        pass

    def confirm_specs(self):
        # selected signals get and find from dbc and fd dictionaries
        # then customize specs adding
        # then they put confirmed_signals list in
        # then selected widget items remove
        # then customized signals add confirmed_signal widget
        try:
            if self.listWidget_confirmed_signals.count():
                self.statusBar().setStyleSheet("background-color : Red")
                self.statusBar().showMessage("NO SELECTED SİGNAL")
            for i in range(self.listWidget_selected_signals.count()):
                item = self.listWidget_selected_signals.item(i)
                signal = self.get_signal_from_dictionaries(item.text())
                if signal != None:
                    signal["Name frame"] = (
                        self.lineEdit_1_prefix.text() + "_" + item.text()
                    )
                    signal["Typedef frame"] = self.lineEdit_2_type.text()
                    signal["InitValue frame"] = self.lineEdit_5_initial_value.text()
                    signal["Offset frame"] = self.lineEdit_3_offset.text()
                    signal["factor frame"] = self.lineEdit_4_factor.text()

                    self.confirmed_signals.append(signal)
                    self.add_item_to_confirmed_signals_widget(item)

            self.listWidget_selected_signals.clear()
            # frame ve sinyaller generate halini alıp selected widgetindan silindi

        except Exception as e:
            self.statusBar().setStyleSheet("background-color : purple")
            self.statusBar().showMessage(str(e))

    def add_item_to_confirmed_signals_widget(self, item):
        """Adding a new signal to the list widget"""
        signal_selected_or_not = True
        # did the signal selected before it controls below
        for i in range(self.listWidget_confirmed_signals.count()):
            selected_signal = self.listWidget_confirmed_signals.item(i)
            if selected_signal.text() == item.text():
                signal_selected_or_not = (
                    False  # when signal selected expression equals fals
                )
        if signal_selected_or_not:  # if sigal doesnt selected
            self.listWidget_confirmed_signals.addItem(item.text())
            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage("info : Signal have been selected succesfully")
            return
        else:
            self.statusBar().showMessage("Warning : Signal already have been selected")
            self.statusBar().setStyleSheet("background-color : coral")
            return

    def get_signal_from_dictionaries(self, signal_name):
        for signal in self.fd:
            if signal["Name"] == signal_name:
                return signal
        for signal in self.dbc:
            if signal["Signal Name"] == signal_name:
                return signal
        return None

    def signal_describes(self, item):
        header = self.tableWidget_display_signals.horizontalHeader()
        header.setSectionResizeMode(0, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(1, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(2, QHeaderView.ResizeToContents)
        header.setMinimumSectionSize(20)
        try:
            for row in self.dbc:
                if "Signal Name" in row:
                    if row["Signal Name"] == item.text():
                        item = self.tableWidget_display_signals.item(1, 0)
                        item.setText(str(row["Signal Name"]))
                        item = self.tableWidget_display_signals.item(1, 1)
                        item.setText(str(row["Description"]))
                        item = self.tableWidget_display_signals.item(1, 2)
                        item.setText(str(row["Min"]))
                        item = self.tableWidget_display_signals.item(1, 3)
                        item.setText(str(row["Max"]))
                        item = self.tableWidget_display_signals.item(1, 4)
                        if "Offset" in row:
                            item.setText(str(row["Offset"]))
                            item = self.tableWidget_display_signals.item(0, 5)
                        else:
                            item.setText("None")
                            item = self.tableWidget_display_signals.item(0, 5)
                        return
                else:
                    break
            for row in self.fd:
                if row["Name"] == (item.text()):
                    item = self.tableWidget_display_signals.item(0, 0)
                    item.setText(str(row["Name"]))
                    item = self.tableWidget_display_signals.item(0, 1)
                    item.setText(str(row["Description"]))
                    item = self.tableWidget_display_signals.item(0, 2)
                    item.setText(str(row["Min"]))
                    item = self.tableWidget_display_signals.item(0, 3)
                    item.setText(str(row["Max"]))
                    item = self.tableWidget_display_signals.item(0, 4)
                    if "Offset" in row:
                        item.setText(str(row["Offset"]))
                        item = self.tableWidget_display_signals.item(0, 5)
                        return
                    else:
                        item.setText("None")
                        item = self.tableWidget_display_signals.item(0, 5)
                    return
        except Exception as e:
            pass
        return

    def fd_item_describes(self, item):
        header = self.tableWidget_display_signals.horizontalHeader()
        header.setSectionResizeMode(0, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(1, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(2, QHeaderView.ResizeToContents)
        header.setMinimumSectionSize(20)

        signal_name = item.text(0)
        try:
            for row in self.fd:
                if row["Name"] == signal_name:
                    item = self.tableWidget_display_signals.item(0, 0)
                    item.setText(str(signal_name))
                    item = self.tableWidget_display_signals.item(0, 1)
                    item.setText(str(row["Description"]))
                    item = self.tableWidget_display_signals.item(0, 2)
                    item.setText(str(row["Min"]))
                    item = self.tableWidget_display_signals.item(0, 3)
                    item.setText(str(row["Max"]))
                    item = self.tableWidget_display_signals.item(0, 5)
                    item.setText(str(row["InitValue"]))
                    return
            return
        except Exception as e:
            print(e)

    def dbc_item_describes(self, item):
        header = self.tableWidget_display_signals.horizontalHeader()
        header.setSectionResizeMode(0, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(1, QHeaderView.ResizeToContents)
        header.setSectionResizeMode(2, QHeaderView.ResizeToContents)
        header.setMinimumSectionSize(20)
        try:
            for row in self.dbc:
                if "Signal Name" in row:
                    if row["Signal Name"] == item.text(0):
                        item = self.tableWidget_display_signals.item(1, 0)
                        item.setText(str(row["Signal Name"]))
                        item = self.tableWidget_display_signals.item(1, 1)
                        item.setText(str(row["Description"]))
                        item = self.tableWidget_display_signals.item(1, 2)
                        item.setText(str(row["Min"]))
                        item = self.tableWidget_display_signals.item(1, 3)
                        item.setText(str(row["Max"]))
                        item = self.tableWidget_display_signals.item(1, 4)
                        if "Offset" in row:
                            item.setText(str(row["Offset"]))
                            item = self.tableWidget_display_signals.item(1, 5)
                        else:
                            item.setText("None")
                            item = self.tableWidget_display_signals.item(1, 5)
                        return
                else:
                    break
        except Exception as e:
            print(e)

    def fd_open_explorer(self):
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
            dialog.setNameFilter(("FD excell (*.xlxs)"))
            path = dialog.getOpenFileName(None, "FD Open File", "", "(*.xlsx)")
            path = self.get_file_name_and_path_as_str(path)
            df = self.fd_open_excel_as_pandas_frame(path)
            self.add_row_to_tree_wigdet_dbc_signals(
                self.treeWidget_fd_signals,
                "fd",
                df,
                self.get_column_name_to_import(df),
                "SafCIH_",
            )
            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage(" Info : File Exprolere is Opened.")
            return
        except Exception as e:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "Error : An error occurred when the file was openning"
            )
            print(e)

    def fd_open_excel_as_pandas_frame(self, file_path):
        try:
            temp = pd.ExcelFile(file_path)
            self.sheet_name = self.get_sheet_name(temp.sheet_names)
            df = pd.read_excel(file_path, self.sheet_name)
            return df
        except Exception as e:
            print("hata :", e)
            return

    def add_row_to_tree_wigdet_fd_signals(self, df):
        data_fd = df.to_dict(orient="records")
        order = 0
        self.fd = data_fd
        self.treeWidget_fd_signals.clear()
        for row in data_fd:
            if "SafCIH" in row["Name"]:
                item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_fd_signals)
                item_0.setText(order, row["Name"])
                self.treeWidget_fd_signals.topLevelItem(order).setText(0, row["Name"])
                order += 1
        self.treeWidget_fd_signals.setSortingEnabled(True)
        return

    def list_item_double_clicked(self, item):
        event = QtWidgets.QApplication.mouseButtons()
        try:
            if event == QtCore.Qt.LeftButton:
                self.listWidget_selected_signals.takeItem(
                    self.listWidget_selected_signals.row(item)
                )
                self.statusBar().setStyleSheet("background-color : lightgreen")
                self.statusBar().showMessage(
                    "info : Signal have been removed succesfully"
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
        signal_selected_or_not = True
        event = QtWidgets.QApplication.mouseButtons()
        if event == QtCore.Qt.LeftButton:  # left click control
            # did the signal selected before it controls below
            for i in range(self.listWidget_selected_signals.count()):
                selected_signal = self.listWidget_selected_signals.item(i)
                if selected_signal.text() == item.text(0):
                    signal_selected_or_not = (
                        False  # when signal selected expression equals fals
                    )
            if signal_selected_or_not:  # if sigal doesnt selected
                self.listWidget_selected_signals.addItem(item.text(0))
                self.statusBar().setStyleSheet("background-color : lightgreen")
                self.statusBar().showMessage(
                    "info : Signal have been selected succesfully"
                )
                return
            else:
                self.statusBar().showMessage(
                    "Warning : Signal already have been selected"
                )
                self.statusBar().setStyleSheet("background-color : coral")
                return

    def get_file_name_and_path_as_str(self, path):
        path = "".join(path)
        file_name = path.split("/")[-1]
        file_name = file_name.replace("(*.xlsx)", "")
        # print("\n iste file -->", file_name, "<--", file_name)
        path = path.replace("(*.xlsx)", "")
        # print("\n iste path -->", path, "<--")
        return path

    def dbc_open_explorer(self):
        try:
            dialog = QFileDialog()
            dialog.setViewMode(QFileDialog.Detail)  # Set view mode to Detail
            dialog.setNameFilter(("dbc excell (*.xlxs)"))
            path = dialog.getOpenFileName(None, "Open File", "", "(*.xlsx)")
            path = self.get_file_name_and_path_as_str(path)
            df = self.open_excel_dbc_as_pandas_frame(path)
            column_name = self.get_column_name_to_import(df)
            self.add_row_to_tree_wigdet_dbc_signals(
                self.treeWidget_dbc_signals, "dbc", df, column_name, None
            )
            self.statusBar().setStyleSheet("background-color : lightgreen")
            self.statusBar().showMessage(" Info : File Exprolere is Opened.")
            return
        except Exception as e:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "Error : An error occurred when the file was openning"
            )
            return

    def open_excel_dbc_as_pandas_frame(self, file_path):
        try:
            # self.sheet_name = self.get_sheet_name(pd.ExcelFile(file_path).sheet_names)
            df = pd.read_excel(
                file_path, self.get_sheet_name(pd.ExcelFile(file_path).sheet_names)
            )
            return df
        except Exception as e:
            self.statusBar().setStyleSheet("background-color : crimson")
            self.statusBar().showMessage(
                "EXCEPTION at there->open_excell_dbc_as_pandas_frame function"
            )
            return

    def get_sheet_name(self, sheet_names):
        selected_sheet, ok = QInputDialog.getItem(
            None, "Select sheet", "sheet Names", sheet_names, 0, False
        )
        if ok:
            return selected_sheet
        return None

    def get_column_name_to_import(self, df):
        selected_column, ok = QInputDialog.getItem(
            None, "Select Column", "columns", df.columns, 0, False
        )
        if ok:
            return selected_column
        return None

    def add_row_to_tree_wigdet_dbc_signals(
        self, treeWidget, store_name, df, column_name, prefix
    ):
        if store_name.lower() == "dbc" :
            self.dbc = df.to_dict(orient="records")
        else :
            self.fd = df.to_dict(orient="records")
        order = 0
        data_store = df.to_dict(orient="records")
        treeWidget.clear()
        if prefix != None:
            for row in data_store:
                if prefix in row[column_name]:
                    item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget_fd_signals)
                    item_0.setText(order, row[column_name])
                    self.treeWidget_fd_signals.topLevelItem(order).setText(
                        0, row[column_name]
                    )
                    order += 1
            self.treeWidget_fd_signals.setSortingEnabled(True)
            return
        else:
            for row in data_store:
                item_0 = QtWidgets.QTreeWidgetItem(treeWidget)
                item_0.setText(order, row[column_name])
                treeWidget.topLevelItem(order).setText(0, row[column_name])
                order += 1
            treeWidget.setSortingEnabled(True)
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
