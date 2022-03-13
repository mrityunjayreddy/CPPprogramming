#include<iostream>
#include<cmath>
using namespace std;
class A
{
	int a;
	int b;
	public:
		A()
		{
			this->a =0;
			this->b =0;
		}
		A(int a,int b)
		{
			this->a = a;
			this->b = b;
		}
		
		A operator + (A &obj)
		{
			A temp;
			temp.a = this->a + obj.a;
			temp.b = this->b + obj.b;
			return temp;
		} 
		
		A operator - (A &obj)
		{
			A temp;
			int a = (this->a - obj.a);
			int b = (this->b - obj.b);
			temp.a =abs(a);
			temp.b =abs(b);
			return temp;
		}
		
		void test()
		{
			cout<<"The values in the object are : "<<a<<" "<<b<<endl;
		}
};


int main()
{
	A obj1(2,3);
	A obj2(4,5);
	A obj3 = obj1-obj2;
	obj3.test();
	return 0;
}
