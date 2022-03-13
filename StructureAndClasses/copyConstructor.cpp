#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			this->a = 0;
			this->b = 0;
		}
		A(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		A(A &obj) // this is a copy constructor 
		/*Here a reference is used because if not done this way it would lead to infinite recursion*/
		{
			this->a = obj.a;
			this->b = obj.b;
		}
	void test()
	{
		cout<<"Test function to display all the values : "<<a<<" "<<b;
	}
};
int main()
{
	A obj(10,20);
	A obj1(obj);
	obj1.test();
	return 0;
}
