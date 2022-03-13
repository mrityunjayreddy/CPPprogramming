#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		A() //default constructor
		{
			this->a = 0;
			this->b = -1;
		}
		A(int a,int b)  //parameterized constructor
		{
			this->a = a;
			this->b =b;
		}
		A(A &obj) //copy constructor
		{
			this->a = obj.a;
			this->b = obj.b;
		}
		void test()
		{
			cout<<"The values in the object are : "<<a<<" "<<b;
		}
};
/* When there are more than one constructors with differnt signatures its called 
constructor overloading */
