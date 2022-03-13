#include<iostream>
using namespace std;
class DivisionByZero
{
	public:
		void msg()
		{
			cout<<"Division by zero Exception was thrown"<<endl;
		}
};
int main()
{
	int a = 0;
	int b=10;
	try
	{
		if(a==0)
		throw DivisionByZero();
	}
	catch(DivisionByZero obj)
	{
		obj.msg();
	}
	return 0;
}
