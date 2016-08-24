#!/usr/bin/python
from suds.client import Client  
client = Client("http://%s:%s/?wsdl" % ('127.0.0.1', '80')) 
ret = client.service.getData("0010", "id", "helloworld")

print ret
