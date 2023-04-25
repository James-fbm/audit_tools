import os
from typing import Optional

from PySide6.QtCore import Qt
from PySide6.QtGui import QCursor
from PySide6.QtWidgets import QDialog, QWidget, QDialogButtonBox, QFormLayout, QLabel, QLineEdit, QFrame, \
    QPushButton

from database import global_db


class TemplateCreateDialog(QDialog):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setWindowTitle('新建模板')

        # 创建输入框和标签
        self.qlabel_templatename = QLabel(text="模板名称:", parent=self)
        self.qline_templatename = QLineEdit(parent=self)

        self.qlabel_accstd = QLabel(text="会计准则:", parent=self)
        self.qlabel_selectedstd = QLabel('企业会计准则', parent=self)


        self.qlabel_stmtcate = QLabel(text="报表类别:", parent=self)
        self.qlabel_selectedstmt = QLabel(text="资产负债表", parent=self)


        self.qlabel_celldef = QLabel(text="结构设置", parent=self)
        self.qpush_celldef = QPushButton(text='查看结构', parent=self)
        # 设置链接风格
        self.qpush_celldef.setStyleSheet(
            "text-decoration: underline; color: blue; background-color: transparent; border: none;")
        self.qpush_celldef.setCursor(QCursor(Qt.PointingHandCursor))
        self.qpush_celldef.clicked.connect(self.setCells)

        self.qframe_sepline = QFrame(parent=self)
        self.qframe_sepline.setFrameShape(QFrame.HLine)
        self.qframe_sepline.setFrameShadow(QFrame.Sunken)

        self.qlabel_openbalance = QLabel(text="审定期初数（选填）", parent=self)
        self.qline_openbalance = QLineEdit(parent=self)
        self.qlabel_closebalance = QLabel(text="审定期末数（选填）", parent=self)
        self.qline_closebalance = QLineEdit(parent=self)
        self.qlabel_openamount = QLabel(text="审定上期发生额（选填）", parent=self)
        self.qline_openamount = QLineEdit(parent=self)
        self.qlabel_closeamount = QLabel(text="审定发生额（选填）", parent=self)
        self.qline_closeamount = QLineEdit(parent=self)

        # 创建布局管理器
        layout = QFormLayout()
        layout.addRow(self.qlabel_templatename, self.qline_templatename)
        layout.addRow(self.qlabel_accstd, self.qlabel_selectedstd)
        layout.addRow(self.qlabel_stmtcate, self.qlabel_selectedstmt)
        layout.addRow(self.qlabel_celldef, self.qpush_celldef)
        layout.addRow(self.qframe_sepline)
        layout.addRow(self.qlabel_openbalance, self.qline_openbalance)
        layout.addRow(self.qlabel_closebalance, self.qline_closebalance)
        layout.addRow(self.qlabel_openamount, self.qline_openamount)
        layout.addRow(self.qlabel_closeamount, self.qline_closeamount)


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

    def init(self, stmt):
        self.qlabel_selectedstd.setText(global_db.getProjectFromDB(active=True)['account_std'])
        self.qlabel_selectedstmt.setText(stmt)

    def getSettings(self):
        return {
            '模板名称': self.qline_templatename.text(),
            '会计准则': self.qlabel_selectedstd.text(),
            '报表类别': self.qlabel_selectedstmt.text(),
            '审定期初数': self.qline_openbalance.text(),
            '审定期末数': self.qline_closebalance.text(),
            '审定上期发生额': self.qline_openamount.text(),
            '审定发生额': self.qline_closeamount.text()
        }

    def setCells(self):
        # 先获取相对路径，再获取父目录路径，最后打开文件
        parent_dir = os.path.abspath(os.path.join(os.getcwd(), ".."))
        file_path = os.path.join(parent_dir, "program_files", "template_cache.xlsx")
        os.startfile(file_path)