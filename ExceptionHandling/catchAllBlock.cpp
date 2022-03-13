#include<iostream>
using namespace std;
int main() 
{
	int a = 1;
	int b = 0;
	int c = -1;
	try{
		if(a<0)
		throw 1;
		if(b!=0)
		throw 2.5f;
		if(c==-1)
		throw "Negative value is caught";
	}
	catch(int a)
	{
		cout<<"Integer value is caught from exception"<<endl;
	}
	catch(float f)
	{
		cout<<"Float value is caught from exception"<<endl;
	}
	catch(...) //this is the catch all block it catches all types of exception
	{
		cout<<"Remaining exception is caught"<<endl;
	}
	return 0;
}
