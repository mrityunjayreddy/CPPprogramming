//this program is to deomstrate implemetation of virtual classes which generally occurs during hybrid inheritance
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
class B : public virtual A
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
class C : public virtual A
{
	int c;
	public:
		C()
		{
			c=0;
		}
		void test2()
		{
			cout<<"This is a function of derived class C"<<endl;
		}
};
class D : public B,public C
{
	int d;
	public:
		D()
		{
			d=0;
		}
		void test3()
		{
			cout<<"This is a function of derived class C"<<endl;
		}
};
int main()
{
	D obj;
	obj.test();
	return 0;
}
