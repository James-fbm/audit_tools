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
      'getstmtdata': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getstmtdata/': '/getstmtdata'
        }
      },
      'getdefaulttemplate': {
        target: 'http://localhost:8080',
        changeOrigin: true,
        pathRewrite: {
          '^/getdefaulttemplate/': '/getdefaulttemplate'
        }
      }
    }
   }
})
