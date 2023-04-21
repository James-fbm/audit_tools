<template>
  <div>
    <el-divider>附注(Word)</el-divider>
    <div v-if="isInWord">
      <el-row :span="24">
        <el-col :span="12">
          <el-button type="info" plain @click="dropEmptyRows">删除所有空行</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="dropNoDataRows">删除所有无数据行</el-button>
        </el-col>
      </el-row><br />
    </div>

    <div v-else>
      <h3>
        You are not using MS Word.<br />
      </h3>
    </div>
  </div>
</template>

<script>

export default {
  name: 'WordAddinForNote',
  inject: ['_stmtdata', '_hidezerorows'],
  watch: {
    _stmtdata(newdata) {
      this.stmtdata = newdata
    },
    _hidezerorows(ifhidezero) {
      this._hidezerorows = ifhidezero
    }
  },
  data() {
    return {
      stmtdata: this._stmtdata,
      hidezerorows: this._hidezerorows
    }
  },
  computed: {
    isInWord: function () {
      return (typeof (window.Word) != "undefined")
    }
  },
  methods: {

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
    }
  },
}

</script>