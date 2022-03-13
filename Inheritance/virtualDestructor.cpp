//this program is to demonstrate the need of a virtual destructor
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"This is constructor of class A"<<endl;
		}
		virtual ~A() //this destructor would never be executed since the object of class A is never created
		{
			cout<<"This is a destructor of class A"<<endl;
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"This is constructor of class B"<<endl;
		} 
		~B() //this destructor won't be executed until base class destructor is made virtual
		{
			cout<<"This is destructor of class B"<<endl; 
		}
};
int main()
{
	A *obj = new B();
	delete obj; //the object has to be destroyed explicitly

	return 0;
}
