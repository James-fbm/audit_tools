import json
import sqlite3

from flask import Flask, g

app = Flask(__name__)


def get_db():
    db = getattr(g, '_database', None)
    if db is None:
        db = g._database = sqlite3.connect('../data_cache')
    return db


@app.teardown_appcontext
def close_connection(exception):
    db = getattr(g, '_database', None)
    if db is not None:
        db.close()


@app.route('/getstmtdata', methods=['GET'])
def getStmtData():
    ls_stmtdata = []
    cur = get_db().cursor()
    try:
        cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata')
        for (account_cls, open_balance, close_balance, open_amount, close_amount) in cur.fetchall():
            ls_stmtdata.append({'报表科目': account_cls, '审定期初数': open_balance, '审定期末数': close_balance,
                                     '审定上期发生额': open_amount, '审定发生额': close_amount})
    except Exception as e:
        print(e)
    return json.dumps(ls_stmtdata)


if __name__ == '__main__':
    app.run(host='localhost', port=8080)
