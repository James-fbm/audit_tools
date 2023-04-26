import os
from typing import Optional

from PySide6.QtCore import Qt
from PySide6.QtGui import QCursor
from PySide6.QtWidgets import QDialog, QWidget, QLabel, QLineEdit, QFrame, QFormLayout, QDialogButtonBox, QPushButton

from database import global_db


class NoteTemplateEditDialog(QDialog):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setWindowTitle('模板属性')

        self.qlabel_templateid = QLabel(text='序号:', parent=self)
        self.qlabel_templateid_value = QLabel(text='0', parent=self)

        # 创建输入框和标签
        self.qlabel_name = QLabel(text="模板名称:", parent=self)
        self.qline_name_value = QLineEdit(parent=self)

        self.qlabel_accstd = QLabel(text="会计准则:", parent=self)
        self.qlabel_accstd_value = QLabel('企业会计准则', parent=self)

        self.qlabel_celldef = QLabel(text="结构设置", parent=self)
        self.qpush_celldef = QPushButton(text='查看结构', parent=self)
        # 设置链接风格
        self.qpush_celldef.setStyleSheet(
            "text-decoration: underline; color: blue; background-color: transparent; border: none;")
        self.qpush_celldef.setCursor(QCursor(Qt.PointingHandCursor))
        self.qpush_celldef.clicked.connect(self.setCells)

        # 创建布局管理器
        layout = QFormLayout()
        layout.addRow(self.qlabel_templateid, self.qlabel_templateid_value)
        layout.addRow(self.qlabel_name, self.qline_name_value)
        layout.addRow(self.qlabel_accstd, self.qlabel_accstd_value)
        layout.addRow(self.qlabel_celldef, self.qpush_celldef)

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

    def init(self, id):
        templateinfo = global_db.getNoteTemplateFromDB(id=id)
        self.qlabel_templateid_value.setText(str(templateinfo['id']))
        self.qline_name_value.setText(templateinfo['name'])
        self.qlabel_accstd_value.setText(templateinfo['account_std'])

    def getSettings(self):
        return {
            '序号': int(self.qlabel_templateid_value.text()),
            '模板名称': self.qline_name_value.text(),
        }

    def setCells(self):
        parent_dir = os.path.abspath(os.path.join(os.getcwd(), ".."))
        file_path = os.path.join(parent_dir, "program_files", "note_template_cache.xlsx")
        os.startfile(file_path)