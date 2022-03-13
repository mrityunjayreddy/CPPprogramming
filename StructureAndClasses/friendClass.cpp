#include<iostream>
using namespace std;
class B; //this is called a class prototype
class A
{
	int a;
	int b; 
	int c;
	void fun()
	{
		cout<<"This is fun of class A"<<endl;
	}
	friend class B; //this is a declaration of friend class
};
class B
{
	public:
		A obj;
		void test()
		{
			cout<<"Executing functions of class A"<<endl;
			obj.fun(); //since B is a friend of A all private members are accesible via object of class A
		}
};
int main()
{
	B obj;
	obj.test();
	return 0;
}
