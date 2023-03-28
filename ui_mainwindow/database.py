from PySide6.QtSql import QSqlDatabase, QSqlQuery

global_db = QSqlDatabase.addDatabase("QSQLITE", "sqlite_connection")
global_db.setDatabaseName("../data_cache")
global_db.open()


def initDatabase():
    query = QSqlQuery(db=global_db)
    query.exec('CREATE TABLE IF NOT EXISTS filelinks(filename TEXT UNIQUE, link TEXT, filter TEXT)')
    # '审定期初数': xxx, '审定期末数': xxx, '审定上期发生额': xxx, '审定发生额': xxx
    query.exec('CREATE TABLE IF NOT EXISTS basicstmtdata(account_cls TEXT UNIQUE, open_balance REAL, '
               'close_balance REAL, open_amount REAL, close_amount REAL)')

    default_filelinks = {
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

    for filename in default_filelinks.keys():
        q = 'INSERT OR IGNORE INTO filelinks(filename, link, filter) VALUES(:filename, :link, :filter)'
        query.prepare(q)
        query.bindValue(':filename', filename)
        query.bindValue(':link', default_filelinks[filename][0])
        query.bindValue(':filter', default_filelinks[filename][1])
        query.exec()
