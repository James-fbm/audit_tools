from typing import Optional

import httpx
from PySide6.QtCore import Qt
from PySide6.QtGui import QIcon, QStandardItemModel, QStandardItem, QMouseEvent
from PySide6.QtWidgets import QWidget, QButtonGroup, QPushButton, QHBoxLayout, QVBoxLayout, QMessageBox, QTreeView, \
    QDialog

from database import global_db
from notetemplatecreatedialog import NoteTemplateCreateDialog
from notetemplateeditdialog import NoteTemplateEditDialog


class NoteTemplateBrowser(QWidget):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self._push_add = QPushButton(parent=self)
        self._push_add.setText('新建')
        self._push_add.setIcon(QIcon("icons/icon_add.svg"))
        self._push_add.clicked.connect(self.createTemplate)
        self._push_edit = QPushButton(parent=self)
        self._push_edit.setText('编辑')
        self._push_edit.setIcon(QIcon("icons/icon_rename.svg"))
        self._push_edit.clicked.connect(self.editTemplate)
        self._push_delete = QPushButton(parent=self)
        self._push_delete.setText('删除')
        self._push_delete.setIcon(QIcon("icons/icon_delete.svg"))
        self._push_delete.clicked.connect(self.deleteTemplate)

        self._templatebrowserview = NoteTemplateBrowserView(self)
        self._templatebrowserview.setFocusPolicy(Qt.NoFocus)
        self._templatebrowserview.activated.connect(self.editTemplate)

        # 创建 QVBoxLayout 布局管理器，并将两个 QRadioButton 和 QTreeView 添加到其中
        self._toolbuttonlayout = QVBoxLayout()
        self._toolbuttonlayout.addWidget(self._push_add)
        self._toolbuttonlayout.addWidget(self._push_edit)
        self._toolbuttonlayout.addWidget(self._push_delete)
        self._mainlayout = QHBoxLayout()
        self._mainlayout.addWidget(self._templatebrowserview)
        self._mainlayout.addLayout(self._toolbuttonlayout)

        # 设置布局管理器
        self.setLayout(self._mainlayout)

        self._templatecreatedialog = NoteTemplateCreateDialog(self)
        self._templateeditdialog = NoteTemplateEditDialog(self)
        self._templatedeletedialog = NoteTemplateDeleteDialog(self)

        self._msgbox = QMessageBox(parent=self)

        self.init()

    def init(self):
        self._templatecreatedialog.init()
        self._templatebrowserview.init()

    def createTemplate(self):
        account_std = global_db.getProjectFromDB(active=True)['account_std']
        r = httpx.post('http://127.0.0.1:8080/initnotetemplate', json={'会计准则': account_std, 'templateid': 0})
        if r.status_code == 200:
            ret = r.json()
            if ret['request'] == '1':
                self._msgbox.setText('初始化失败：请求参数异常')
                self._msgbox.setWindowTitle('错误')
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
                return
            else:
                if self._templatecreatedialog.exec() == QDialog.Accepted:
                    rq = httpx.post('http://127.0.0.1:8080/savenotetemplatesettings',
                                    json={'templateid': global_db.getMaxNoteTemplateID() + 1,
                                          'update': False})
                    if rq.status_code != 200:
                        self._msgbox.setText('创建失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
                        self._msgbox.setWindowTitle('错误')
                        self._msgbox.setIcon(QMessageBox.Critical)
                        self._msgbox.exec()
                        return
                    else:
                        ret_rq = rq.json()
                        if ret_rq['request'] == 1:
                            self._msgbox.setText('初始化失败：请求参数异常。')
                            self._msgbox.setWindowTitle('错误')
                            self._msgbox.setIcon(QMessageBox.Critical)
                            self._msgbox.exec()
                            return
                        else:
                            if ret_rq['execute'] == 1:
                                self._msgbox.setText(
                                    '创建失败：写入数据库时出现异常。\n请检查数据库database_sqlite的完整性，或是直接重启本程序。')
                                self._msgbox.setWindowTitle('错误')
                                self._msgbox.setIcon(QMessageBox.Critical)
                                self._msgbox.exec()
                                return
                            # 成功执行
                            else:
                                global_db.initNewNoteTemplate(self._templatecreatedialog.getSettings())
                                self._msgbox.setText('创建成功。')
                                self._msgbox.setWindowTitle('成功')
                                self._msgbox.setIcon(QMessageBox.Information)
                                self._msgbox.exec()
                                self.init()
                else:
                    pass
        else:
            self._msgbox.setText('创建失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
            self._msgbox.setWindowTitle('错误')
            self._msgbox.setIcon(QMessageBox.Critical)
            self._msgbox.exec()
            return

    def editTemplate(self):
        try:
            # 获取templateid后发送请求以获取template单元格结构
            index = self._templatebrowserview.selectionModel().selectedIndexes()[0]
            id = int(self._templatebrowserview.getModel().itemData(index).get(0))
        except Exception:
            return
        r = httpx.post('http://127.0.0.1:8080/initnotetemplate', json={'报表': '',
                                                                   '会计准则': '', 'templateid': id})
        if r.status_code == 200:
            ret = r.json()
            if ret['request'] == '1':
                self._msgbox.setText('初始化失败：请求参数异常')
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
                return
            else:
                if ret['execute'] == 2:
                    self._msgbox.setText(
                        '初始化失败：在处理过程中出现异常。\n请检查数据库database_sqlite的完整性，或是直接重启本程序。')
                    self._msgbox.setIcon(QMessageBox.Critical)
                    self._msgbox.setWindowTitle('错误')
                    self._msgbox.exec()
                    return
                elif ret['execute'] == 0:
                    self._templateeditdialog.init(id)
                    if self._templateeditdialog.exec() == QDialog.Accepted:
                        rq = httpx.post('http://127.0.0.1:8080/savenotetemplatesettings',
                                        json={'templateid': id, 'update': True})
                        if rq.status_code != 200:
                            self._msgbox.setText('更新失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
                            self._msgbox.setIcon(QMessageBox.Critical)
                            self._msgbox.setWindowTitle('错误')
                            self._msgbox.exec()
                        else:
                            ret_rq = rq.json()
                            if ret_rq['request'] == 1:
                                self._msgbox.setText('更新失败：请求参数异常。')
                                self._msgbox.setIcon(QMessageBox.Critical)
                                self._msgbox.setWindowTitle('错误')
                                self._msgbox.exec()
                                return
                            else:
                                if ret_rq['execute'] == 1:
                                    self._msgbox.setText(
                                        '更新失败：写入数据库时出现异常。\n请检查数据库database_sqlite的完整性，或是直接重启本程序。')
                                    self._msgbox.setIcon(QMessageBox.Critical)
                                    self._msgbox.setWindowTitle('错误')
                                    self._msgbox.exec()
                                    return
                                # 成功执行
                                else:
                                    global_db.updateNoteTemplate(self._templateeditdialog.getSettings())
                                    print(self._templateeditdialog.getSettings())
                                    self._msgbox.setText('更新成功。')
                                    self._msgbox.setWindowTitle('成功')
                                    self._msgbox.setIcon(QMessageBox.Information)
                                    self._msgbox.exec()
                                    self.init()
                else:
                    pass
        else:
            self._msgbox.setText('更新失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序')
            self._msgbox.setIcon(QMessageBox.Critical)
            self._msgbox.setWindowTitle('错误')
            self._msgbox.exec()
            return

    def deleteTemplate(self):
        try:
            index = self._templatebrowserview.selectionModel().selectedIndexes()[0]
            id = int(self._templatebrowserview.getModel().itemData(index).get(0))
            if self._templatedeletedialog.exec() == QMessageBox.Ok:
                global_db.deleteNoteTemplate(id)
                self.init()
        except Exception:
            pass


class NoteTemplateBrowserView(QTreeView):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self._model = {}
        self.setEditTriggers(QTreeView.NoEditTriggers)
        self.header().setStretchLastSection(True)

    def init(self):
        self.initModel()

    def getModel(self):
        return self._model

    def initModel(self):
        templates = global_db.getNoteTemplateFromDB()
        self._model = QStandardItemModel(0, 3, parent=self)
        for template in templates:
            qitem_id = QStandardItem()
            qitem_id.setText(str(template[0]))
            qitem_name = QStandardItem()
            qitem_name.setText(template[1])
            qitem_time = QStandardItem()
            qitem_time.setText(template[2])

            self._model.appendRow([qitem_id, qitem_name, qitem_time])
        self._model.setHorizontalHeaderLabels(["序号", "名称", "创建时间"])

        self.setModel(self._model)

    def mouseDoubleClickEvent(self, event: QMouseEvent) -> None:
        # 只通过左键的双击事件
        if event.button() == Qt.LeftButton:
            super().mouseDoubleClickEvent(event)
        else:
            pass


class NoteTemplateDeleteDialog(QMessageBox):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setText('即将删除该模板所有相关数据，请三思')
        self.setWindowTitle('删除模板')
        self.setIcon(QMessageBox.Warning)
        self.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
        self.setContentsMargins(10, 10, 10, 10)