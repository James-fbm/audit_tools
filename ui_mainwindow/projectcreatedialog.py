from typing import Optional

from PySide6.QtCore import Qt
from PySide6.QtWidgets import QDialog, QLineEdit, QLabel, QDialogButtonBox, QWidget, QCheckBox, \
    QFormLayout, QStyleFactory, QComboBox


class ProjectCreateDialog(QDialog):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setWindowTitle("新建项目")
        self.setStyle(QStyleFactory.create("Windows"))

        # 创建输入框和标签
        self.qlabel_prjname = QLabel(text="项目名称:", parent=self)
        self.qline_prjname = QLineEdit(parent=self)

        self.qlabel_accstd = QLabel(text="会计准则:", parent=self)
        self.qcombo_accstd = QComboBox(parent=self)
        self.qcombo_accstd.addItem("企业会计准则")
        self.qcombo_accstd.addItem("2011年小企业会计准则")

        self.qlabel_active = QLabel(text="打开:", parent=self)
        self.qcheck_active = QCheckBox(parent=self)

        # 创建布局管理器
        layout = QFormLayout()
        layout.addRow(self.qlabel_prjname, self.qline_prjname)
        layout.addRow(self.qlabel_accstd, self.qcombo_accstd)
        layout.addRow(self.qlabel_active, self.qcheck_active)

        # 添加确定和取消按钮
        buttons = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, Qt.Horizontal, self)
        buttons.accepted.connect(self.accept)
        buttons.rejected.connect(self.reject)
        layout.addWidget(buttons)

        layout.setVerticalSpacing(20)
        self.setLayout(layout)
        self.setContentsMargins(10, 10, 10, 10)

        # 设置布局
        self.setLayout(layout)

    def getNameSetting(self):
        return self.qline_prjname.text()

    def getStdSetting(self):
        return self.qcombo_accstd.currentText()

    def getOpenSetting(self):
        return self.qcheck_active.isChecked()