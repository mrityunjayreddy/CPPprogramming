#include<iostream>
using namespace std;
class A
{
	int a;
	
	public:
		static int var;
		A()
		{
			var = 0;
			a = 0;
		}
		void test1()
		{
			cout<<"I am a normal function"<<endl;
		}
		static void test2()
		{
			cout<<"I am a static function"<<endl;
		}
};
int A:: var = 10; // a static variable is always declared outside the class using the scope resolution operator
int main()
{
	A obj;
	obj.test1();
	A::test2(); //a static function can be accesessed directly using the scope resolution operation
	A::var  = 10; // a static variable can  be accessed using the class name via the scope resoltuion operator
	return 0;
}
