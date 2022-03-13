#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			a =0;
		}
		void test()
		{
			cout<<"This is a function of base class"<<endl;
		}
};
class B : public A
{
	int b;
	public:
		B()
		{
			b=0;
		}
		void test() //this function is overidded by the test function of base class
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
