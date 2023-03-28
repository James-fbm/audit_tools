import App from './App.vue'
import Vue from "vue"
import VueRouter from "vue-router"
import router from './router/index.js'
Vue.config.productionTip = false
import ElementUI from 'element-ui'
import 'element-ui/lib/theme-chalk/index.css'

Vue.use(VueRouter)
Vue.use(ElementUI)

window.Office.onReady(new Vue({
  router,
  el: '#app',
  render: h => h(App),
}).$mount('#app'))
