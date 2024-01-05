from test import Ui_MainWindow
from PyQt5 import QtWidgets


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.pushButton.clicked.connect(self.add_item)
        self.pushButton_2.clicked.connect(self.add_sub_item)

    def add_item(self):
        item_0 = QtWidgets.QTreeWidgetItem(self.treeWidget)
        item_0.setText(2, "Item 0")
        self.treeWidget.topLevelItem(2).setText(0, "Item 0")

    def add_sub_item(self):
        # Access the top-level item
        first_item = self.treeWidget.topLevelItem(0)
        print(first_item.text(0))
        child_item = QtWidgets.QTreeWidgetItem()
        child_item.setText(0, "Child Item11")
        first_item.addChild(child_item)
        print(first_item.childCount())
        print(first_item.child(first_item.childCount() - 1).text(0))


app = QtWidgets.QApplication([])
window = MainWindow()
window.show()
app.exec_()



    def add_sub_item(self, df):
        # Access the top-level item
        for i in range(len(df)):
            first_item = self.treeWidget.topLevelItem(0)
            df_filtered = df[df["Message Name"] equal first_item.text(i)]
            #df_filtered = df.filter(items=[first_item.text(i)] )
            df_filtered
            for j in range(len(df_filtered)):
                child_item = QtWidgets.QTreeWidgetItem()
                child_item.setText(0, f"{df_filtered.iloc[j, 0]}")
                first_item.addChild(child_item)
                # print(first_item.child(first_item.childCount() - 1).text(0))
    
    def tree_item_double_clicked(self, item, event):
        print("Double clicked on item", item.text(0))
        old = self.lineEdit.text()
        old = old +" " + item.text(0)
        self.lineEdit.setText(old)
        
    class NumberedItemDelegate(QStyledItemDelegate):
        def paint(self, painter, option, index):
            QStyledItemDelegate.paint(self, painter, option, index)
            row_number = str(index.row() + 1)
            rect = option.rect
            painter.drawText(rect, Qt.AlignLeft, row_number)
           # alt satır diğer class içinde yazılacak
            # self.treeWidget_signals.setItemDelegate(NumberedItemDelegate())

        