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
          <el-button type="info" plain @click="getNoteTemplate">获取附注模板</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="showTemplateStructure">查看模板结构</el-button>
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
      selectedaccountstd: ''
    }
  },


  methods: {
    getNoteTemplate() {
      // let _this = this
      // axios({
      //   method: 'get',
      //   url: '/getnotetemplates',
      //   params: {
      //     '会计准则': _this.selectedaccountstd,
      //   }
      // }).then(function (response) {
      //   _this.templatelist = response.data
      // })
    },
    showTemplateStructure() {

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

          for (let j = 0; j < tbrowlist.length; ++j) {
            var tbrow = tbrowlist[j]
            let rowindex = ''
            let colindex = ''
            let tbrowvalues = tbrow.values[0]
            for (let k = 0; k < tbrowvalues.length; ++k) {
              if (tbrowvalues[k].replace(/\s/g, "") == '合计') {
                rowindex = [j, k]
              }
              if (tbrowvalues[k].replace(/\s/g, "") == '年末余额') {
                colindex = [j, k]
              }
            }
            if (rowindex != '') {
              console.log('rowindex', rowindex)
            }
            if (colindex != '') {
              console.log('colindex', colindex)
            }
            if (rowindex != '' && colindex != '') {
              let rowc = rowindex[0]
              let colc = colindex[1]
              let closecell = tb.getCell(rowc, colc)
              closecell.load('value')
              await context.sync()
              closecell.value = 'fajodf'
              await context.sync()
            }
          }
        }

      })
    }
  },
}

</script>