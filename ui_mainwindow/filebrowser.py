from datetime import datetime
import os
from typing import Optional

from PySide6.QtCore import Qt, QPoint, QModelIndex
from PySide6.QtGui import QStandardItemModel, QStandardItem, QIcon, QBrush, QMouseEvent
from PySide6.QtWidgets import QTreeView, QWidget, QAbstractItemView, QFileDialog, QVBoxLayout, QMessageBox, QFormLayout, \
    QLabel, QDialog, QDialogButtonBox

from database import global_db
from filemenu import FileMenu


class FileBrowser(QWidget):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self._filebrowserview = FileBrowserView(self)
        # 激活文件项信号
        self._filebrowserview.activated.connect(self.fileactivated)
        # 用户不可编辑
        self._filebrowserview.setEditTriggers(QAbstractItemView.NoEditTriggers)
        # 右键文件项信号
        self._filebrowserview.setContextMenuPolicy(Qt.CustomContextMenu)
        self._filebrowserview.customContextMenuRequested.connect(self.filerightclicked)
        self._filebrowserview.setFocusPolicy(Qt.NoFocus)

        # 右击filebrowser打开相应菜单栏
        # 菜单栏的状态（禁用/启用等）依赖于self._filebrowserview的数据
        self._filemenu = FileMenu(self._filebrowserview)
        self._filemenu.fileOpening.connect(self.openFile)
        self._filemenu.dirOpening.connect(self.openDir)
        self._filemenu.fileLinkSetting.connect(self.setFileLink)
        self._filemenu.attributeShowing.connect(self.showAttribute)

        self._mainlayout = QVBoxLayout()
        self._mainlayout.addWidget(self._filebrowserview)
        self.setLayout(self._mainlayout)

        self._msgbox = QMessageBox(parent=self)
        self._fileattributedialog = FileAttributeDialog(parent=self)

        self.init()

    def init(self):
        self._filebrowserview.init()

    def getView(self):
        return self._filebrowserview

    def fileactivated(self, index: QModelIndex):
        qitem_file = self._filebrowserview.getModel().itemFromIndex(index)
        str_filelink = self._filebrowserview.getFileLink(qitem_file)
        # 若文件项是一个category, 则忽略操作
        if self._filebrowserview.isCategory(qitem_file):
            pass
        # 若文件项不存在关联的磁盘文件，则打开FileDialog让用户选择文件
        elif str_filelink == '':
            self.setFileLink(qitem_file)
        else:
            self.openFile(qitem_file)

    def filerightclicked(self, pos: QPoint):
        qitem_file = self._filebrowserview.getItemFromPoint(pos)
        if qitem_file is not None:
            # 若文件项是category，则不打开菜单栏
            if self._filebrowserview.isCategory(qitem_file):
                pass
            else:
                # 若该文件项无链接的磁盘文件，则禁用“打开”功能
                if self._filebrowserview.getFileLink(qitem_file) == '':
                    self._filemenu.setOpenDisabled()
                    self._filemenu.setOpenDirDisabled()
                    self._filemenu.setAttributeDisabled()
                else:
                    self._filemenu.setOpenEnabled()
                    self._filemenu.setOpenDirEnabled()
                    self._filemenu.setAttributeEnabled()
                self._filemenu.setCurrentFileItem(qitem_file)
                self._filemenu.exec(self._filebrowserview.mapToGlobal(pos))

    def setFileLink(self, fileitem: QStandardItem):
        tp_dialogreturn = QFileDialog.getOpenFileName(parent=self,
                                                      filter=self._filebrowserview.getFileFilter(fileitem))
        # 若FileDialog返回值非空，则保存该路径，并将文件项显示为黑色
        if tp_dialogreturn[0] != '':
            self._filebrowserview.setFileLink(fileitem, tp_dialogreturn[0])
            fileitem.setForeground(QBrush(Qt.black))

    def openFile(self, fileitem: QStandardItem):
        str_filelink = self._filebrowserview.getFileLink(fileitem)
        try:
            os.startfile(str_filelink)
        except Exception:
            self._msgbox.setText('无法打开文件: ' + str_filelink)
            self._msgbox.setIcon(QMessageBox.Critical)
            self._msgbox.exec()

    def openDir(self, fileitem: QStandardItem):
        str_filelink = self._filebrowserview.getFileLink(fileitem)
        str_dirlink = os.path.dirname(os.path.abspath(str_filelink))
        os.startfile(str_dirlink)

    def showAttribute(self, fileitem: QStandardItem):
        str_filelink = self._filebrowserview.getFileLink(fileitem)
        self._fileattributedialog.init(str_filelink)
        self._fileattributedialog.show()


class FileBrowserView(QTreeView):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self._filelink = []
        self._modeldata = {
            "基本表": [
                ["科目余额表", "icons/icon_excel.svg"],
                ["报表项目映射表", "icons/icon_text.svg"]
            ],
            "会计报表": [
                ["报表模板", "icons/icon_excel.svg"]
            ],
            "审计报告": [
                ["附注", "icons/icon_word.svg"]
            ]
        }
        self._model = {}
        self.header().setVisible(False)

    # 可供外部调用的init
    def init(self):
        self.initFileLinkFromDB()
        self.initModel()
        self.expandAll()

    def getFileLink(self, fileitem: QStandardItem):
        filename = fileitem.text()
        return self._filelink[filename][0]

    def setFileLink(self, fileitem: QStandardItem, filelink: str):
        global_db.updateFileLink(fileitem.text(), filelink)
        self._filelink[fileitem.text()][0] = filelink

    def getFileLinkFromFileName(self, filename: str):
        return self._filelink[filename][0]

    def getFileFilter(self, fileitem: QStandardItem):
        return self._filelink[fileitem.text()][1]

    def getModel(self):
        return self._model

    def getItemFromPoint(self, pos: QPoint):
        return self.getModel().itemFromIndex(self.indexAt(pos))

    def isCategory(self, fileitem: QStandardItem):
        filename = fileitem.text()
        if filename == '基本表' or filename == '会计报表' or filename == '审计报告':
            return True
        else:
            return False

    def initFileLinkFromDB(self):
        self._filelink = global_db.getFileLink()

    def initModel(self):
        qmodel_file = QStandardItemModel(0, 1, self)

        for (cate, childlist) in self._modeldata.items():
            qitem_cate = QStandardItem(cate)
            for child in childlist:
                qitem_child = QStandardItem(QIcon(child[1]), child[0])
                # 若文件项不存在关联的磁盘文件，则将其显示为灰色
                if self.getFileLinkFromFileName(child[0]) == '':
                    qitem_child.setForeground(QBrush(Qt.gray))
                qitem_cate.appendRow(qitem_child)
            qmodel_file.appendRow(qitem_cate)

        self._model = qmodel_file
        self.setModel(self._model)

    def mousePressEvent(self, event: QMouseEvent) -> None:
        # 通过左键的单击事件
        if event.button() == Qt.LeftButton:
            super().mousePressEvent(event)
        # 点击其它键只允许选中文件项
        else:
            i = self.indexAt(event.pos())
            self.setCurrentIndex(i)

    def mouseDoubleClickEvent(self, event: QMouseEvent) -> None:
        # 只通过左键的双击事件
        if event.button() == Qt.LeftButton:
            super().mouseDoubleClickEvent(event)
        else:
            pass


class FileAttributeDialog(QDialog):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        layout = QFormLayout()

        self.qlabel_fname = QLabel('文件名:', parent=self)
        self.qlabel_fname_value = QLabel('', parent=self)

        self.qlabel_fpath = QLabel('位置:', parent=self)
        self.qlabel_fpath_value = QLabel('', parent=self)

        self.qlabel_fsize = QLabel("大小:", parent=self)
        self.qlabel_fsize_value = QLabel('', parent=self)

        self.qlabel_fctime = QLabel(text="创建时间:", parent=self)
        self.qlabel_fctime_value = QLabel('', parent=self)

        self.qlabel_fatime = QLabel(text="最后访问时间:", parent=self)
        self.qlabel_fatime_value = QLabel('', parent=self)

        self.qlabel_fmtime = QLabel(text="最后修改时间:", parent=self)
        self.qlabel_fmtime_value = QLabel('', parent=self)

        layout.addRow(self.qlabel_fname, self.qlabel_fname_value)
        layout.addRow(self.qlabel_fpath, self.qlabel_fpath_value)
        layout.addRow(self.qlabel_fsize, self.qlabel_fsize_value)
        layout.addRow(self.qlabel_fctime, self.qlabel_fctime_value)
        layout.addRow(self.qlabel_fatime, self.qlabel_fatime_value)
        layout.addRow(self.qlabel_fmtime, self.qlabel_fmtime_value)

        buttons = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, Qt.Horizontal, self)
        buttons.accepted.connect(self.accept)
        buttons.rejected.connect(self.reject)
        layout.addWidget(buttons)

        layout.setVerticalSpacing(30)
        self.setLayout(layout)

        self.setContentsMargins(10, 10, 10, 10)
        self.setWindowTitle('文件属性')

    def init(self, str_filelink):
        file_stat = os.stat(os.path.abspath(str_filelink))

        file_size = lambda size: size if size < 1024 else size / 1024 if size < 1024 ** 2 else size / 1024 ** 2 \
            if size < 1024 ** 3 else size / 1024 ** 3 if size < 1024 ** 4 else -1
        format_size = lambda size: f"{file_size(size):.2f} B" if size < 1024 \
            else f"{file_size(size):.2f} KB" if size < 1024 ** 2 \
            else f"{file_size(size):.2f} MB" if size < 1024 ** 3 \
            else f"{file_size(size):.2f} GB" if size < 1024 ** 4 \
            else f"{file_size(size):.2f} TB"

        self.qlabel_fname_value.setText(os.path.basename(str_filelink))
        self.qlabel_fpath_value.setText(os.path.dirname(os.path.abspath(str_filelink)))
        self.qlabel_fsize_value.setText(format_size(file_stat.st_size))
        self.qlabel_fctime_value.setText(datetime.fromtimestamp(file_stat.st_ctime).strftime("%Y-%m-%d %H:%M:%S"))
        self.qlabel_fatime_value.setText(datetime.fromtimestamp(file_stat.st_atime).strftime("%Y-%m-%d %H:%M:%S"))
        self.qlabel_fmtime_value.setText(datetime.fromtimestamp(file_stat.st_mtime).strftime("%Y-%m-%d %H:%M:%S"))
