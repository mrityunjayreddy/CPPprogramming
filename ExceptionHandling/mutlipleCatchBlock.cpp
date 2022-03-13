#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = -1;
	try{
		if (a<0)
		throw 1;
		else if (b<0)
		throw -2.5f;
	}
	catch(int a)
	{
		cout<<"Caught integer value"<<endl;
	}
	catch(float b)
	{
		cout<<"Caught float value"<<endl;
	}
	return 0;
}
