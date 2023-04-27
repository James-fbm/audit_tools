const { defineConfig } = require('@vue/cli-service')
const fs = require("fs");
const path = require("path");
const homedir = require('os').homedir()

module.exports = defineConfig({
  transpileDependencies: true,
  devServer: {
    port: 3000,
    open: false,
    client: {
      webSocketURL: "ws://0.0.0.0:3000/ws"
    },
    https: {
      key: fs.readFileSync(path.resolve(`${homedir}/.office-addin-dev-certs/localhost.key`)),
      cert: fs.readFileSync(path.resolve(`${homedir}/.office-addin-dev-certs/localhost.crt`)),
      ca: fs.readFileSync(path.resolve(`${homedir}/.office-addin-dev-certs/ca.crt`)),
    },
    proxy: {
      'getactiveaccountstd': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getactiveaccountstd/': '/getactiveaccountstd'
        }
      },
      'getstmtdata': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getstmtdata/': '/getstmtdata'
        }
      },
      'gettemplates': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/gettemplates/': '/gettemplates'
        }
      },
      'gettemplatestructure': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/gettemplatestructure/': 'gettemplatestructure'
        }
      },
      'getnotetemplates': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getnotetemplates/': '/getnotetemplates'
        }
      },
      'getnotetemplatestructure': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getnotetemplatestructure/': 'getnotetemplatestructure'
        }
      },
    }
   }
})
