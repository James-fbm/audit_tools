from PySide6.QtCore import QObject
from PySide6.QtSql import QSqlDatabase, QSqlQuery
from PySide6.QtCore import Signal


class DataBase(QObject):
    noActiveProject = Signal()

    def __init__(self):
        super().__init__()
        self._default_filelinks = {
            # 'FILLED'填充文件类别项目，这些项目不应有磁盘文件链接
            "基本表": ['FILLED', 'NONE'],
            "会计报表": ['FILLED', 'NONE'],
            "审计报告": ['FILLED', 'NONE'],
            "科目余额表": ['', '*.xls *.xlsx *.xlsm'],
            "核算项目表": ['', '*.xls *.xlsx *.xlsm'],
            "报表项目映射表": ['', '*.txt'],
            "报表模板": ['FS Audited 2021_Template（适用于已执行新收入、金融、租赁准则的企业及小企业）.xltx',
                         '*.xltx *.xls *.xlsx *.xlsm'],
            "附注": ['', '*.doc *.docx *.docm']
        }

        # 在initDataBase中进行初始化并赋值
        self._db = None
        self._max_projectid = 0
        self._active_projectid = 0

    # 初始化数据库和数据表
    def checkDataBase(self, dbname):
        self._db = QSqlDatabase.addDatabase("QSQLITE", "sqlite_connection")
        self._db.setDatabaseName(dbname)
        self._db.open()
        query = QSqlQuery(db=self._db)
        # 如果不存在这三个表，则创建新表
        query.exec(
            'CREATE TABLE IF NOT EXISTS projects(id INTEGER UNIQUE, name TEXT, active BOOLEAN, account_std TEXT)')
        query.exec('CREATE TABLE IF NOT EXISTS filelinks(filename TEXT, link TEXT, '
                   'filter TEXT, projectid INTEGER, UNIQUE(filename, projectid))')
        # '审定期初数': xxx, '审定期末数': xxx, '审定上期发生额': xxx, '审定发生额': xxx
        query.exec('CREATE TABLE IF NOT EXISTS basicstmtdata(account_cls TEXT, open_balance REAL, close_balance REAL,'
                   ' open_amount REAL, close_amount REAL, projectid INTEGER, UNIQUE(account_cls, projectid))')

        self._max_projectid = self.getMaxProjectIDFromDB()
        self._active_projectid = self.getActiveProjectIDFromDB()
        # 没有激活的项目，通知主窗口
        if self._active_projectid == 0:
            self.noActiveProject.emit()

    def getMaxProjectIDFromDB(self):
        maxprojectid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT MAX(id) AS maxprojectid FROM projects) WHERE maxprojectid IS NOT NULL')
        while query.next():
            maxprojectid = query.value("maxprojectid")
        return maxprojectid

    def getActiveProjectIDFromDB(self):
        activeprojectid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT id AS activeprojectid FROM projects WHERE active=1) '
                   'WHERE activeprojectid IS NOT NULL')
        while query.next():
            activeprojectid = query.value("activeprojectid")
        return activeprojectid

    def getActiveProjectStdFromDB(self):
        activeprojectstd = '企业会计准则'
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT account_std FROM projects WHERE active=1) '
                   'WHERE account_std IS NOT NULL')
        while query.next():
            activeprojectstd = query.value("account_std")
        return activeprojectstd

    def getFileLink(self):
        filelink = {}
        query = QSqlQuery(db=self._db)
        query.prepare('SELECT * FROM filelinks WHERE projectid = :projectid')
        query.bindValue(':projectid', self._active_projectid)
        query.exec()
        while query.next():
            filelink[query.value('filename')] = [query.value('link'), query.value('filter')]
        return filelink

    def initNewProject(self, name: str, active: bool, account_std):
        self._max_projectid += 1
        # 创建项目时是否跳转到该项目
        if active == True:
            self._active_projectid = self._max_projectid
        # 若未设置项目名，则设定其默认名
        if name == '':
            name = '新项目' + str(self._max_projectid)

        query = QSqlQuery(db=self._db)
        # 向projects表插入新项目
        q = 'INSERT INTO projects(id, name, active, account_std) VALUES (:id, :name, :active, :account_std)'
        query.prepare(q)
        query.bindValue(':id', self._max_projectid)
        query.bindValue(':name', name)
        query.bindValue(':active', active)
        query.bindValue(':account_std', account_std)
        query.exec()
        # 初始化新项目中文件项的默认磁盘链接
        for filename in self._default_filelinks.keys():
            q = 'INSERT OR IGNORE INTO filelinks(filename, link, filter, projectid) VALUES(:filename, :link, :filter, :projectid)'
            query.prepare(q)
            query.bindValue(':filename', filename)
            query.bindValue(':link', self._default_filelinks[filename][0])
            query.bindValue(':filter', self._default_filelinks[filename][1])
            query.bindValue(':projectid', self._max_projectid)
            query.exec()

    def getFileLink(self):
        filelink = {}
        query = QSqlQuery(db=self._db)
        query.prepare('SELECT * FROM filelinks WHERE projectid = :projectid')
        query.bindValue(':projectid', self._active_projectid)
        query.exec()
        while query.next():
            filelink[query.value('filename')] = [query.value('link'), query.value('filter')]
        return filelink

    def updateFileLink(self, filename, filelink):
        query = QSqlQuery(db=self._db)
        q = 'UPDATE filelinks SET link = :link WHERE filename = :filename AND projectid = :projectid'
        query.prepare(q)
        query.bindValue(':link', filelink)
        query.bindValue(':filename', filename)
        query.bindValue(':projectid', self._active_projectid)
        query.exec()

    def updateCalcResult(self, result):
        query = QSqlQuery(db=self._db)
        q = 'DELETE FROM basicstmtdata WHERE projectid = :projectid'
        query.prepare(q)
        query.bindValue(':projectid', self._active_projectid)
        query.exec()
        for account_data in result:
            q = 'INSERT INTO basicstmtdata VALUES(:account_cls, :open_balance, :close_balance,' \
                ' :open_amount, :close_amount, :projectid)'
            query.prepare(q)
            query.bindValue(':account_cls', account_data['报表科目'])
            query.bindValue(':open_balance', float(account_data['审定期初数']))
            query.bindValue(':close_balance', float(account_data['审定期末数']))
            query.bindValue(':open_amount', float(account_data['审定上期发生额']))
            query.bindValue(':close_amount', float(account_data['审定发生额']))
            query.bindValue(':projectid', self._active_projectid)
            query.exec()

    def updateAccountStd(self, account_std):
        query = QSqlQuery(db=self._db)
        q = 'UPDATE projects SET account_std = :account_std WHERE id = :id'
        query.prepare(q)
        query.bindValue(':account_std', account_std)
        query.bindValue(':id', self._active_projectid)
        query.exec()


global_db = DataBase()