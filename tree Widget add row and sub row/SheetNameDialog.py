from PyQt5.QtWidgets import QApplication, QDialog, QComboBox, QPushButton,QVBoxLayout
from PyQt5 import QtCore, QtWidgets

class SheetNameDialogWidget(QDialog):
    sheet_name_signal = QtCore.pyqtSignal(str)
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Dialog Penceresi")
        self.sheet_name = None  # Sheet adını tutmak için değişken tanımla
        # Combobox widget'ı oluştur
        self.combobox = QComboBox()
        
        # Buton widget'ı oluştur
        self.button = QPushButton("Seçimi Gönder")
        #self.button.clicked.connect(self.send_selection)

        # Widget'ları pencereye ekle
        self.layout = QVBoxLayout()
        self.layout.addWidget(self.combobox)
        self.layout.addWidget(self.button)
        self.setLayout(self.layout)

    def send_selection(self):
        print(self.combobox.currentText())
        self.sheet_name_signal.emit(str(self.combobox.currentText()))
        self.close()