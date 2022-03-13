//this is a program to demonstrate exception handling
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 0;
	try{
		if(b==0)
		throw 1;
		int c = a/b;
		cout<<"No error"<<endl;
	}
	catch(int a)
	{
		cout<<"Division by zero error"<<endl;
	}
	return 0;
}
