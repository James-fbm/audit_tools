<template>
  <div>
    <el-divider>报表(Excel)</el-divider>
    <div v-if="isInExcel">
      <el-form label-position="left" label-width="auto">
        <el-form-item>
          <el-radio-group v-model="selectedstatement">
            <el-radio :label="1">资产负债表</el-radio>
            <el-radio :label="2">利润表</el-radio>
          </el-radio-group>
        </el-form-item>
        <el-form-item label="转至工作表">
          <el-select v-model="selectedsheetname">
            <el-option v-for="sheet in sheetnamelist" :key="sheet.value" :label="sheet.label" :value="sheet.value">
            </el-option>
          </el-select>
        </el-form-item>
        <el-form-item label="选择模板">
          <el-select v-model="selectedtemplate">
            <el-option v-for="template in templatelist" :key="template.id" :label="template.name" :value="template.id">
            </el-option>
          </el-select>
        </el-form-item>
      </el-form>
      <el-row :span="24">
        <el-col :span="12">
          <el-button type="info" plain @click="writeStmtData">写入报表数据</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="showtemplates">查看模板结构</el-button>
        </el-col>
      </el-row>
    </div>
    <div v-else>
      <h3>
        You are not using MS Excel.<br />
      </h3>
    </div>
    <el-dialog :visible.sync="dialog_showtemplates" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_showtemplates = false">返回</el-button>
      <el-table :data="templatestructure" height="500">
        <el-table-column prop="account_name" label="项目名称"></el-table-column>
        <el-table-column prop="account_alias" label="类别"></el-table-column>
        <el-table-column prop="account_category" label="别名"></el-table-column>
        <el-table-column prop="open_balance_cell" label="审定期初数单元格"></el-table-column>
        <el-table-column prop="close_balance_cell" label="审定期末数单元格"></el-table-column>
        <el-table-column prop="open_amount_cell" label="审定借方发生额单元格"></el-table-column>
        <el-table-column prop="close_amount_cell" label="审定贷方发生额单元格"></el-table-column>
      </el-table>
    </el-dialog>
  </div>
</template>

<script>
import axios from 'axios'
export default {
  name: 'ExcelAddinForBalanceSheet',
  inject: ['_stmtdata'],
  mounted() {
    this.isInExcel = typeof (window.Excel) != "undefined"
    window.Excel.run(async context => {
      let sheetcollection = context.workbook.worksheets
      sheetcollection.load('items')
      await context.sync()
      let sheetlist = sheetcollection.items
      for (let i = 0; i < sheetlist.length; ++i) {
        this.sheetnamelist.push({
          value: sheetlist[i].name,
          label: sheetlist[i].name
        })
      }
    })

    let _this = this
    axios({
      method: 'get',
      url: '/gettemplates',
      params: {
        '报表': _this.selectedstatement == 1 ? '资产负债表' : '利润表',
      }
    }).then(function (response) {
      _this.templatelist = response.data
    })
  },
  data() {
    return {
      // stmtdata通过父组件响应式更新
      stmtdata: this._stmtdata,
      templatelist: [],
      selectedtemplate: '',
      selectedstatement: 1,
      // 使用WorksheetCollection.getItemOrNullObject()方法时不可传入空字符串，故将其如此初始化
      selectedsheetname: '',
      sheetnamelist: [],
      templatestructure: [],
      dialog_showtemplates: false,
      isInExcel: false
    }
  },
  watch: {
    _stmtdata(newdata) {
      this.stmtdata = newdata
    },
    selectedstatement(newstatement) {
      let statementname = ''
      if (newstatement == 1) {
        statementname = '资产负债表'
      } else {
        statementname = '利润表'
      }
      this.selectedtemplate = ''
      let _this = this
      axios({
        method: 'get',
        url: '/gettemplates',
        params: {
          '报表': statementname,
        }
      }).then(function (response) {
        _this.templatelist = response.data
      })
    },
    selectedsheetname(newsheetname, oldsheetname) {
      window.Excel.run(async context => {
        let sheetcollection = context.workbook.worksheets
        // 资产负债表的worksheet对象
        let sheetBS = sheetcollection.getItemOrNullObject(newsheetname)
        sheetBS.load('isNullObject')
        sheetBS.load('visibility')
        await context.sync()
        // 存在当前工作表，且当前工作表可见
        if (sheetBS.isNullObject == false && sheetBS.visibility == 'Visible') {
          sheetBS.activate()
        } else {
          this.$message({
            message: '无法跳转至当前选定工作表，该表可能不存在或是已被隐藏',
            type: 'error',
            duration: 2500
          })
          this.selectedsheetname = oldsheetname
        }
        await context.sync()
      })
    }
  },
  methods: {
    writeStmtData() {
      window.Excel.run(async context => {
        let sheet = context.workbook.worksheets.getActiveWorksheet()

        for (let i = 0; i < this.stmtdata.length; ++i) {
          let account_name = this.stmtdata[i]['account_cls']
          let open_balance = this.stmtdata[i]['open_balance']
          let close_balance = this.stmtdata[i]['close_balance']
          let open_balance_cell = ''
          let close_balance_cell = ''
          for (let j = 0; j < this.templatestructure.length; ++j) {
            if (this.templatestructure[j]['account_name'] == account_name) {
              open_balance_cell = this.templatestructure[j]['open_balance_cell']
              close_balance_cell = this.templatestructure[j]['close_balance_cell']
              break
            }
          }
          console.log(open_balance_cell, close_balance_cell, open_balance, close_balance)
          if (open_balance_cell != null) {
            open_balance_cell = sheet.getRange(open_balance_cell)
            open_balance_cell.values = [[open_balance]]
          }
          if (close_balance_cell != null) {
            close_balance_cell = sheet.getRange(close_balance_cell)
            close_balance_cell.values = [[close_balance]]
          }
        }
        await context.sync()
      })
    },
    showtemplates() {
      let _this = this
      axios({
        method: 'get',
        url: '/gettemplatestructure',
        params: {
          'templateid': _this.selectedtemplate,
        }
      }).then(function (response) {
        _this.templatestructure = response.data
      })
      this.dialog_showtemplates = true
    }
  }
}
</script>