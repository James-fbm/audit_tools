import json
import sqlite3

from flask import Flask, g, request
from fn_calc_stmt_data import calc_stmt_data

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

@app.route('/calcstmtdata', methods=['POST'])
def calcStmtData():
    requestdata = request.json
    id = int(requestdata['id'])
    flink_balance = requestdata['科目余额表']
    flink_map = requestdata['报表项目映射表']
    account_std = requestdata['会计准则']
    calc_result = calc_stmt_data(flink_balance, flink_map, account_std)
    return json.dumps(calc_result)

@app.route('/getstmtdata/<int:id>', methods=['GET'])
def getStmtData():
    ls_stmtdata = []
    cur = get_db().cursor()
    try:
        cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata WHERE projectid = ?', id)
        for (account_cls, open_balance, close_balance, open_amount, close_amount) in cur.fetchall():
            ls_stmtdata.append({'报表科目': account_cls, '审定期初数': open_balance, '审定期末数': close_balance,
                                     '审定上期发生额': open_amount, '审定发生额': close_amount})
    except Exception as e:
        print(e)
    print(ls_stmtdata)
    return json.dumps(ls_stmtdata)

@app.route('/getBSacclist', methods=['GET'])
def getBSAccList():
    ls_BSacclist = []


if __name__ == '__main__':
    app.run(host='localhost', port=8080)
