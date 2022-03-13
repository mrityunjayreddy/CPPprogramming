#include<iostream>
using namespace std;
struct A{              //in a structure all members are by default public
	int val1;
	int val2;
	int val3;
	
	int sum()
	{
		return val1+val2+val3;
	}
	int product()
	{
		return val1*val2*val3;
	}
};

class B{             //in a class all members are by default private
public:
	int a;
	int b;
	
	int subtract();
	int divide();
};

int B:: divide()         // :: this is called the scope resolution operator
{
	return a/b;
}
int B::subtract()
{
	return a-b;
}


int main()
{
	A obj1;
	B obj2;
	
	obj1.val1=10; obj1.val2=20; obj1.val3=25;
	obj2.a=30; obj2.b=40;
	
	cout<<"Calling functions of structure A :"<<endl;
	cout<<"Addition : "<<obj1.sum()<<endl;
	cout<<"Product  : "<<obj1.product()<<endl;
	cout<<endl;
	
	cout<<"Calling functions of class B :"<<endl;
	cout<<"Division : "<<obj2.divide()<<endl;
	cout<<"Subtraction : "<<obj2.subtract()<<endl;
	cout<<endl;
	
	return 0;
}
