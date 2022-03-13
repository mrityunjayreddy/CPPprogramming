#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		A()
		{
			cout<<"The constructor is called"<<endl;
			cout<<"All values are now initialized"<<endl;
			this->a = 0;
			this->b = -1;
		}
		A(int a,int b)
		{
			this->a = a;
			this->b =b;
		}
		
		
		
		~A() //a destructor cannot have parameters
		{
			cout<<"The destructor is called"<<endl;
			cout<<"All resources are Deallocated"<<endl;
		}
		void test()
		{
			cout<<"The values in the object are : "<<a<<" "<<b<<endl;
		}
};
int main()
{
	A obj;
	obj.test();
	cout<<"Object will now be destroyed"<<endl;
	return 0;
}
/*The destructor is the last function that is called when a program is executed
The main function of destructor is to free all the resources*/
