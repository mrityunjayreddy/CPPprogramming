#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		A()
		{
			a=0;
			b=0;
		}
		void fun() const //since const is used the fun() function can't modify data members of class A
		{
			++a; //this will result in error the function is constant
			++b; //this will result in error the function is constant
			cout<<"I have a purpose"<<endl;
		}
};
// formal parameters that appear in function definition can also be made constant using const keyword
int main()
{
	A obj;
	obj.fun();
	return 0;
}
