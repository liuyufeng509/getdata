#!/usr/bin/python
# -*- coding:utf-8 -*-
from spyne import Application, rpc, ServiceBase  
from spyne import Integer, Unicode, Array, ComplexModel, Iterable 
from spyne.protocol.soap import Soap11  
from spyne.server.wsgi import WsgiApplication  
from wsgiref.simple_server import make_server  
import sys, os
from oracle.mydb import DB
import time
import thread

mylock=thread.allocate_lock()
#获取当前路径
def cur_file_dir():
	path = sys.path[0]
	if os.path.isdir(path):
		return path
	elif os.path.isfile(path):
		return os.path.dirname(path)

#引入当前路径到系统路径中,以便引入模块
cur_path = cur_file_dir()
print cur_path

def f(x):
	return str(x[0]) + ":" + str(x[1])


def getRecord():
	mylock.acquire()
	db = DB()
	db.readConfig(cur_path+'/config.ini')
	db.connDB()
	sql='select a.ip, a.port from GQ_ZCDD_DY a where a.gq_zcdd_dy_id = (select t.gq_zcdd_dy_id from gq_camera t  where t.LOGICID=112045)'
#	sql = 'select * from gg'
	res = db.getRecord(sql)
	mylock.release()
	if isinstance(res, list):
		res = map(f,res)
	return res

class SomeSampleServices(ServiceBase):
	@rpc(Unicode, Unicode,Unicode, _returns=Iterable(Unicode))
	def getData(self, sys_type, identy, content):
		res = getRecord()
		if isinstance(res, list) and res:
			for item in res:
				yield item
		else:
			yield 'NULL'

soap_app = Application([SomeSampleServices],
                       'SampleServices',
                       'JqServiceHttpBinding',
                       in_protocol=Soap11(validator="lxml"),
                       out_protocol=Soap11())
wsgi_app = WsgiApplication(soap_app)

if __name__ == "__main__": 
#	soap_app = Application([SomeSampleServices],  
#							'SampleServices',
#							'JqServiceHttpBinding',
#							in_protocol=Soap11(validator="lxml"),
#							out_protocol=Soap11())
#	wsgi_app = WsgiApplication(soap_app)
#	server = make_server('127.0.0.1', 8000, wsgi_app)
#	sys.exit(server.serve_forever()) 
    from flup.server.fcgi import WSGIServer
    WSGIServer(wsgi_app, bindAddress=('127.0.0.1', 55880)).run()
