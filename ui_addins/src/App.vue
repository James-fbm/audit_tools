<template>
  <div id="app">
    <div>
      <el-menu router mode="vertical" background-color="#F8F8FF" text-color="#000000" active-text-color="#FA8072">
        <el-menu-item index="excel-add-in-for-statements">报表(Excel)</el-menu-item>
        <el-menu-item index="excel-add-in-for-note">附注中间文件(Excel)</el-menu-item>
        <el-menu-item index="word-add-in-for-note">附注(Word)</el-menu-item>
      </el-menu>
    </div>

    <div>
      <router-view></router-view>
    </div>

    <el-divider>基础功能</el-divider>
    <div>
      <el-row type="flex">
        <el-col>
          <el-button type="primary" plain @click="getStmtData">获取报表数据</el-button><br />
        </el-col>
        <el-col>
          <el-button type="primary" plain @click="dialog_showstmtdata = true">查看报表数据</el-button>
        </el-col>
      </el-row>
    </div>

    <!--导入数据结果对话框-->
    <el-dialog :visible.sync="dialog_showstmtdata" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_showstmtdata = false">返回</el-button>
      <el-table :data="stmtdata" height="500">
        <el-table-column prop="account_cls" label="报表科目"></el-table-column>
        <el-table-column prop="open_balance" label="审定期初数"></el-table-column>
        <el-table-column prop="close_balance" label="审定期末数"></el-table-column>
        <el-table-column prop="open_amount" label="审定上期发生额"></el-table-column>
        <el-table-column prop="close_amount" label="审定发生额"></el-table-column>
      </el-table>
    </el-dialog>
  </div>
</template>

<script>
import axios from 'axios'
import { computed } from 'vue'
export default {
  name: 'App',
  provide() {
    return {
      _stmtdata: computed(() => this.stmtdata)
    }
  },
  data() {
    return {
      stmtdata: [],
      dialog_showstmtdata: false
    }
  },
  methods: {
    getStmtData() {
      let _this = this
      axios({
        method: 'get',
        url: '/getstmtdata',
      })
        .then(function (response) {
          // 可通过响应式的provide-inject方式传递到路由子组件
          _this.stmtdata = response.data
          console.log(response.data)

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
    }
  }
}
</script>

<style>
.el-menu {
  text-align: center;
}
</style>