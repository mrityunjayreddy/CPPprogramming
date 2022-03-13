
//this program is to demonstrate constructors in inheritance
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"This is the base class A z`and parent of class B"<<endl;
		}
	
};
class B : public A
{
	int b;
	public:
		B()
		{
			cout<<"This is class B parent of class C and child of class A"<<endl;
		}
};
class C : public B
{
	int c;
	public:
		C()
		{
			cout<<"This is derived class C and inherits from class B"<<endl;
		}
};
int main()
{
	C obj;
	return 0;
}
