#include<iostream>
using namespace std;
class A //a class having a pure virtual function is called abstract class and it cant have an object
{
	int a;
	public:
		A()
		{
			a =0;
		}
		virtual void test() = 0; //this is a pure virtual function
};
class B : public A
{
	int b;
	public:
		B()
		{
			b=0;
		}
		void test() 
		{
			cout<<"This is the test function of class B"<<endl;
		}
		void test1()
		{
			cout<<"This is the test1 function of class B"<<endl;
		}
};
int main()
{
	A *obj = new B(); //obj can't access test1 function of class B due to object slicing
	obj->test();
	return 0;
}
