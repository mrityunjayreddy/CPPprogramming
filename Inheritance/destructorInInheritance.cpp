
//this program is to demonstrate destructors in inheritance
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		~A()
		{
			cout<<"This is destructor of class A"<<endl;
		}
	
};
class B : public A
{
	int b;
	public:
		~B()
		{
			cout<<"This is destructor of class B"<<endl;
		}
};
class C : public B
{
	int c;
	public:
		~C()
		{
			cout<<"This is destructor of class C"<<endl;
		}
};
int main()
{
	C obj;
	return 0;
}
