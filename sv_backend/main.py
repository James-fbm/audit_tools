import json
import sqlite3

from flask import Flask, g, request
from fn_calc_stmt_data import calc_stmt_data
from database import *
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

# ui_mainwindow向此处发请求，用于计算报表数据
@app.route('/calcstmtdata', methods=['POST'])
def calcStmtData():
    requestdata = request.get_json()
    id = int(requestdata['id'])
    flink_balance = requestdata['科目余额表']
    flink_map = requestdata['报表项目映射表']
    account_std = requestdata['会计准则']
    calc_result = calc_stmt_data(flink_balance, flink_map, account_std)
    return json.dumps(calc_result)


# ui_addins向此处发请求，用于获取报表数据
@app.route('/getstmtdata', methods=['GET'])
def getStmtData():
    ls_stmtdata = get_active_stmt_data()
    return json.dumps(ls_stmtdata, ensure_ascii=False)

@app.route('/getdefaulttemplate', methods=['GET'])
def getDefaultTemplate():
    stmt = request.args.get('报表')
    # 被激活项目所使用的会计准则
    account_std = get_active_project_info()[3]
    return json.dumps(get_active_default_template(stmt, account_std), ensure_ascii=False)


if __name__ == '__main__':
    app.run(host='localhost', port=8080)
