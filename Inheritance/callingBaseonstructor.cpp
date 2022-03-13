#include<iostream>
using namespace std; 
class A
{
	int a;
	public:
		A()
		{
			cout<<"Normal Base Constructor"<<endl;
		}
		A(int a)
		{
			this->a = a;
			cout<<"Param Base constructor"<<endl;
		}
};
class B : public A
{
	int b;
	public:
		B(int b) : A(20)
		{
			cout<<"Param constructor was run"<<endl;
		}
};
class C : public B
{
	public:
		C() : B(10)
		{
			
		}
};
int main()
{
	C obj;
	return 0;
}
