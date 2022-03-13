//this program is used to demonstrate the use of friend function
#include<iostream>
using namespace std;
void fun1();
void fun2();
class A
{
	int a = 10;
	protected:
		int b = 20;
	public:
		int c = 30;
		
	friend void fun2(); //this is how freind functions of a class are declared
};
void fun1()
{
	A obj;
	// fun1 function can't access prtotected and private members of class A
	cout<<"Public Member of A is printed "<<obj.c<<endl;
}
void fun2()
{
	//fun2 function can access all data members of class A since its a friend function
	A obj;
	cout<<"All members are accessible"<<endl;
}
