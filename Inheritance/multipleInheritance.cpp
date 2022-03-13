#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			a = 0;
		}
		void test()
		{
			cout<<"This is a function in base class"<<endl;
		}
	
};
class B 
{
	int b;
	public:
		B()
		{
			b=0;
		}
		void test1()
		{
			cout<<"This is a function of derived class B"<<endl;
		}
};
class C : public A , public B
{
	int c;
	public:
		C()
		{
			c=0;
		}
		void test1()
		{
			cout<<"This is a function of derived class C"<<endl;
		}
};
int main()
{
	return 0;
}
