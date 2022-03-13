#include<iostream>
using namespace std;

void division()
{
	int a =0;
	int b=10;
	if(a==0)
	throw 1; //throw can be used inside a function as well
	int c = b/a;
}
int main()
{
	try
	{
		division();
	}
	catch(int a)
	{
		cout<<"An exception was thrown by a function"<<endl;
	}
	return 0;
}
