#!/usr/bin/python
# -*- coding: utf-8 -*-

import cx_Oracle
import sys, os
import ConfigParser
class DB(object):

	def __init__(self):
		pass

	def readConfig(self, filename):
		cf = ConfigParser.ConfigParser()
		try:
			cf.read(filename)
		except:
			print "read config.ini exception"

		try:
			self.user = cf.get('DB','user')
			self.pwd = cf.get('DB','pwd')
			self.conn = cf.get('DB','conn')
		except:
			print "read db info exception"

	def connDB(self):
		self.connection = 'NULL'
		try:
			self.connection = cx_Oracle.connect(self.user,self.pwd,self.conn)
		except cx_Oracle.DatabaseError, ex:
			print "connect exception:"+str(ex)
		return self.connection

	def getRecord(self, sql):
		if self.connection is str:
			print "connection is invilaid"
			return "NULL"
		if isinstance(self.connection, cx_Oracle.Connection):
			try:
				curs = self.connection.cursor()
				rr = curs.execute(sql)
				rows = curs.fetchall()
				curs.close()
				self.connection.close()
				return rows
			except cx_Oracle.DatabaseError, ex:
				print "query err:"+str(ex)
				return "NULL"

def f(x):
	return str(x[0])+":"+str(x[1])

if __name__ == "__main__":
	db = DB()
	db.readConfig('config.ini')
	db.connDB()
#	sql = "select a.ip, a.port from GQ_ZCDD_DY a where a.gq_zcdd_dy_id = (select t.gq_zcdd_dy_id from gq_camera t  where t.LOGICID=112045)"
	sql='select * from gg'
	res = db.getRecord(sql)
	res = map(f, res)
	for item in res:
		print item
	print res
#	for item in res:
#		print item


