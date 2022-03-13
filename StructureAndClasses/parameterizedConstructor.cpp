#include<iostream>
using namespace std;

class A
{
	int val1;
	int val2;
	public:
		A(int a,int b)//a parameterised constructor takes values as arguments to initialise data members
		{
			val1 = a;
			val2 = b;
		}
	void display()
	{
		cout<<"the initialised values are : "<<val1<<" "<<val2<<endl;
	}
};
