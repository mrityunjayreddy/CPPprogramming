#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		A()
		{
			this->a = 0;
			this->b = -1;
		}
		A(int a,int b)
		{
			this->a = a;
			this->b =b;
		}
		void test()
		{
			cout<<"The values in the object are : "<<a<<" "<<b;
		}
};
int main()
{
	A obj(10,20);  //this method of calling constuctor is called implicit call
	A obj1 = A(); //this method of calling constructor is called explicit call
	
	/*Both of the objects created above are present in the stack memory*/
	
	obj1.test();
	return 0;
}
