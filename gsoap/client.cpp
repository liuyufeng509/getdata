#include "soapJqServiceHttpBindingProxy.h"
#include "JqServiceHttpBinding.nsmap"
#include <iostream>
#include <boost/thread.hpp>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <sys/time.h>

using namespace std;

const char server[]= "http://127.0.0.1:80";
void thread();
void thread1();
void thread2();

int b = time(0);
int maxc = 0;

void thread2()
{
	for(int i=0; i<100; i++)
	{
		usleep(1);
		boost::thread t(thread);
	}
}

void thread1()
{
	for(int i=0; i<4;i++)
	{
		boost::thread t(thread2);
	}
	sleep(1000);
}
void thread()
{
	struct timeval t_start;
	gettimeofday(&t_start, NULL); 
	srand(t_start.tv_usec);
	int sec = rand()%10000000;
	//usleep(sec);
	try
	{
		JqServiceHttpBindingProxy appProxy;
	    appProxy.soap_endpoint=server;
	    double result=0;
	    ns1__getData data;
	    data.sys_USCOREtype = "1010";
	    data.identy = "ident";
	    data.content="content";
	    ns1__getDataResponse resp;
		int e1 = time(0);
	    if(SOAP_OK==appProxy.getData(&data, resp))
	    {   
	        for(int i=0; i<resp.getDataResult->__sizestring; i++)
	        {   
				int e = time(0);
				int c = e - b;
				int c1 = e-e1;
				if(c>maxc)
					maxc=c;
	            cout<<resp.getDataResult->string[i]<<" Thread " << boost::this_thread::get_id()<<" sec="<<sec <<" cha="<<maxc<<" c1="<<c1<<endl;
	        }   
	    }else
	       appProxy.soap_stream_fault(std::cerr);
	}catch(boost::thread_interrupted&)
	{
	}
}

int main()
{
	for(int i=0; i<100; i++)
	{
	//	usleep(200000);
		boost::thread t1(thread);
//		t1.join();
	}

	sleep(1000);
	return 0;
}
