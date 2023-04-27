<template>
  <div>
    <el-divider>附注(Word)</el-divider>
    <div v-if="isInWord">
      <el-form label-position="left" label-width="auto">
        <el-form-item label="会计准则">
          <el-select v-model="selectedaccountstd">
            <el-option v-for="std in accountstdlist" :key="std.value" :label="std.label" :value="std.value">
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
      <el-divider></el-divider>
      <el-row :span="24">
        <el-col :span="12">
          <el-button type="info" plain @click="getTemplateStructure">获取附注模板</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="dialog_showtemplates = true">查看模板结构</el-button>
        </el-col>
      </el-row><br />
      <el-row :span="24">
        <el-col :span="12">
          <el-button type="info" plain @click="dropEmptyRows">删除所有空行</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="dropNoDataRows">删除所有无数据行</el-button>
        </el-col>
      </el-row><br />
      <el-button type="warning" @click="testFunction">试验功能</el-button>
    </div>

    <div v-else>
      <h3>
        You are not using MS Word.<br />
      </h3>
    </div>

    <el-dialog :visible.sync="dialog_showtemplates" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_showtemplates = false">返回</el-button><br /><br />
      <el-checkbox-group v-model="tableshowcolumns">
        <el-checkbox label="审定期初数"></el-checkbox>
        <el-checkbox label="审定期末数"></el-checkbox>
        <el-checkbox label="审定上期发生额"></el-checkbox>
        <el-checkbox label="审定发生额"></el-checkbox>
      </el-checkbox-group>
      <el-table :data="templatestructure" height="500">
        <el-table-column prop="account_name" label="项目名称"></el-table-column>
        <el-table-column prop="account_title" label="表格标题"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期初数') != -1" prop="open_balance_rowloc"
          key="open_balance_rowloc" label="审定期初数行索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期初数') != -1" prop="open_balance_rowoffset"
          key="open_balance_rowoffset" label="审定期初数行偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期初数') != -1" prop="open_balance_colloc"
          key="open_balance_colloc" label="审定期初数列索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期初数') != -1" prop="open_balance_coloffset"
          key="open_balance_coloffset" label="审定期初数列偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期末数') != -1" prop="close_balance_rowloc"
          key="close_balance_rowloc" label="审定期末数行索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期末数') != -1" prop="close_balance_rowoffset"
          key="close_balance_rowoffset" label="审定期末数行偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期末数') != -1" prop="close_balance_colloc"
          key="close_balance_colloc" label="审定期末数列索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定期末数') != -1" prop="close_balance_coloffset"
          key="close_balance_coloffset" label="审定期末数列偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定上期发生额') != -1" prop="open_amount_rowloc"
          key="open_balance_rowloc" label="审定期上期发生额行索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定上期发生额') != -1" prop="open_amount_rowoffset"
          key="open_balance_rowoffset" label="审定上期发生额行偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定上期发生额') != -1" prop="open_amount_colloc"
          key="open_balance_colloc" label="审定上期发生额列索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定上期发生额') != -1" prop="open_amount_coloffset"
          key="open_balance_coloffset" label="审定上期发生额列偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定发生额') != -1" prop="close_amount_rowloc"
          key="open_balance_rowloc" label="审定发生额行索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定发生额') != -1" prop="close_amount_rowoffset"
          key="open_balance_rowoffset" label="审定发生额行偏移量"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定发生额') != -1" prop="close_amount_colloc"
          key="open_balance_colloc" label="审定发生额列索引"></el-table-column>
        <el-table-column v-if="tableshowcolumns.indexOf('审定发生额') != -1" prop="close_amount_coloffset"
          key="open_balance_coloffset" label="审定发生额列偏移量"></el-table-column>
      </el-table>
    </el-dialog>

  </div>
</template>

<script>
import axios from 'axios'
export default {
  name: 'WordAddinForNote',
  inject: ['_stmtdata', '_hidezerorows'],
  watch: {
    _stmtdata(newdata) {
      this.stmtdata = newdata
    },
    _hidezerorows(ifhidezero) {
      this._hidezerorows = ifhidezero
    },
    selectedaccountstd(newaccountstd) {
      this.selectedtemplate = ''
      let _this = this
      axios({
        method: 'get',
        url: '/getnotetemplates',
        params: {
          '会计准则': newaccountstd,
        }
      }).then(function (response) {
        _this.templatelist = response.data
      })
    }
  },
  mounted() {
    this.isInWord = typeof (window.Word) != "undefined"

    if (this.isInWord == true) {
      let _this = this

      axios({
        method: 'get',
        url: '/getactiveaccountstd',
      }).then(function (response) {
        _this.selectedaccountstd = response.data
      })
      axios({
        method: 'get',
        url: '/getnotetemplates',
        params: {
          '会计准则': _this.selectedaccountstd,
        }
      }).then(function (response) {
        _this.templatelist = response.data
      })
    }
  },
  data() {
    return {
      isInWord: false,
      stmtdata: this._stmtdata,
      hidezerorows: this._hidezerorows,
      selectedtemplate: '',
      templatelist: [],
      templatestructure: [],
      accountstdlist: [
        {
          label: '企业会计准则',
          value: '企业会计准则'
        },
        {
          label: '2011年小企业会计准则',
          value: '2011年小企业会计准则'
        }
      ],
      tableshowcolumns: [],
      selectedaccountstd: '',
      dialog_showtemplates: false,
    }
  },


  methods: {
    getTemplateStructure() {
      let _this = this
      axios({
        method: 'get',
        url: '/getnotetemplatestructure',
        params: {
          'templateId': _this.selectedtemplate,
        }
      }).then(function (response) {
        _this.templatestructure = response.data

        _this.$message({
          message: '获取成功',
          type: 'success',
          duration: 1500
        });
      })
        .catch(function () {
          _this.$message({
            message: '获取失败',
            type: 'error',
            duration: 1500
          });
        })
    },
    dropEmptyRows() {
      window.Word.run(async (context) => {
        let tbcollection = context.document.body.tables;
        tbcollection.load('items')
        await context.sync()
        let tblist = tbcollection.items

        for (let i = 0; i < tblist.length; ++i) {
          let tb = tblist[i]
          tb.load('rows')
          await context.sync()
          let tbrowcollection = tb.rows

          tbrowcollection.load('items')
          await context.sync()
          let tbrowlist = tbrowcollection.items

          let emptyrowlist = []

          for (let j = 0; j < tbrowlist.length; ++j) {
            var tbrow = tbrowlist[j]
            let isempty = true
            let tbrowvalues = tbrow.values[0]
            for (let k = 0; k < tbrowvalues.length; ++k) {
              if (tbrowvalues[k] != '') {
                isempty = false
                break
              }
            }
            if (isempty == true) {
              emptyrowlist.push(j)
            }
          }

          for (let j = emptyrowlist.length - 1; j >= 0; --j) {
            let deleterowid = emptyrowlist[j]
            tb.deleteRows(deleterowid, 1)
            await context.sync()
          }
        }
        this.$message({
          message: '删除成功',
          type: 'success',
          duration: 1500
        })
      })
    },

    dropNoDataRows() {
      window.Word.run(async (context) => {
        let tbcollection = context.document.body.tables;
        tbcollection.load('items')
        await context.sync()
        let tblist = tbcollection.items

        for (let i = 0; i < tblist.length; ++i) {
          let tb = tblist[i]
          tb.load('rows')
          await context.sync()
          let tbrowcollection = tb.rows

          tbrowcollection.load('items')
          await context.sync()
          let tbrowlist = tbrowcollection.items

          let emptyrowlist = []

          for (let j = 0; j < tbrowlist.length; ++j) {
            var tbrow = tbrowlist[j]
            let isempty = true
            let tbrowvalues = tbrow.values[0]
            for (let k = 1; k < tbrowvalues.length; ++k) {
              if (tbrowvalues[k] != '') {
                isempty = false
                break
              }
            }
            if (isempty == true) {
              emptyrowlist.push(j)
            }
          }

          for (let j = emptyrowlist.length - 1; j >= 0; --j) {
            let deleterowid = emptyrowlist[j]
            tb.deleteRows(deleterowid, 1)
            await context.sync()
          }
        }

        this.$message({
          message: '删除成功',
          type: 'success',
          duration: 1500
        })
      })
    },

    testFunction() {
      window.Word.run(async (context) => {
        // {
        //   account_title: {
        //     'stmtdatarecord': [],
        //     'templaterecord': []
        //   }
        // }
        let table_fill_meta = {}
        for (let i = 0; i < this.templatestructure.length; ++i) {
          let account_title = this.templatestructure[i]['account_title']
          if (account_title != null) {
            table_fill_meta[account_title] = {}
            table_fill_meta[account_title]['templaterecord'] = this.templatestructure[i]
          }
        }
        for (let account_title in table_fill_meta) {
          let account_name = table_fill_meta[account_title]['templaterecord']['account_name']
          for (let i = 0; i < this.stmtdata.length; ++i) {
            if (this.stmtdata[i]['account_cls'] == account_name) {
              table_fill_meta[account_title]['stmtdatarecord'] = this.stmtdata[i]
            }
          }
        }

        let tbcollection = context.document.body.tables;
        tbcollection.load('items')
        await context.sync()
        let tblist = tbcollection.items

        for (let i = 0; i < tblist.length; ++i) {
          let tb = tblist[i]
          let tbtitle = tb.getParagraphBeforeOrNullObject()
          tbtitle.load('style')
          tbtitle.load('text')
          tbtitle.load('isNullObject')
          await context.sync()
          while (tbtitle.isNullObject != true) {
            if (tbtitle.style.indexOf('标题') != -1) {
              let records = table_fill_meta[tbtitle.text]
              if (typeof(records) != 'undefined') {
                let stmtdatarecord = records['stmtdatarecord']
                let templaterecord = records['templaterecord']
                console.log(tbtitle.text, stmtdatarecord, templaterecord)
                // 用户在设置映射表时可能会忽略一些科目，导致stmtdatarecord出现空
                if (typeof(stmtdatarecord) != 'undefined') {
                  // let open_balance = stmtdatarecord['open_balance']
                  // let close_balance = stmtdatarecord['close_balance']
                  // let open_amount = stmtdatarecord['open_amount']
                  // let close_amount = stmtdatarecord['close_amount']
                }
              }
              break
            } else {
              tbtitle = tbtitle.getPreviousOrNullObject()
              tbtitle.load('style')
              tbtitle.load('text')
              tbtitle.load('isNullObject')
              await context.sync()
            }
          }


        }

      })
    }
  },
}

</script>