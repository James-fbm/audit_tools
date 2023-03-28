from typing import Optional

from PySide6.QtWidgets import QToolBar, QComboBox, QWidget


class FunctionToolBar(QToolBar):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.qcombo_accstd = QComboBox(parent=self)
        self.qcombo_accstd.addItem("企业会计准则")
        self.qcombo_accstd.addItem("2011年小企业会计准则")

        self.addWidget(self.qcombo_accstd)

    def currentStandardSelection(self):
        return self.qcombo_accstd.currentText()