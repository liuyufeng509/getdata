#!/usr/bin/python
from flup.server.fcgi import WSGIServer
from getdata import wsgi_app

if __name__ == '__main__':
    WSGIServer(wsgi_app, bindAddress=('127.0.0.1',55880)).run()
