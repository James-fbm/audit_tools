import json
import sqlite3
from waitress import serve
import pandas as pd
from flask import Flask, g, request
from fn_calc_stmt_data import calc_stmt_data
from database import *

app = Flask(__name__)


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
    if calc_result[1] == 0:
        updateCalcResult(id, calc_result[0])
    return str(calc_result[1])


@app.route('/inittemplate', methods=['GET'])
def initTemplate():
    stmt = request.args.get('报表')
    account_std = request.args.get('会计准则')
    templateid = int(request.args.get('templateid'))
    template = init_template(stmt, account_std, templateid)
    return 'OK'


# 将template_cache中的数据存入数据库
@app.route('/savetemplatesettings', methods=['GET'])
def saveTemplateSettings():
    templateid = int(request.args.get('templateid'))
    update = bool(request.args.get('update'))
    save_template_settings(templateid, update)
    return 'OK'
    # return json.dumps(ls_template, ensure_ascii=False)

#################################################################
#################################################################
#################################################################

# ui_addins向此处发请求，用于获取报表数据
@app.route('/getstmtdata', methods=['GET'])
def getStmtData():
    ls_stmtdata = get_active_stmt_data()
    return json.dumps(ls_stmtdata, ensure_ascii=False)

@app.route('/gettemplates', methods=['GET'])
def getTemplates():
    category = request.args.get('报表')
    return json.dumps(get_templates(category), ensure_ascii=False)

@app.route('/gettemplatestructure', methods=['GET'])
def getTemplateStructure():
    templateid = int(request.args.get('templateid'))
    return json.dumps(get_template_structure(templateid), ensure_ascii=False)


if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080)
    # serve(app, host='127.0.0.1', port=8080)
