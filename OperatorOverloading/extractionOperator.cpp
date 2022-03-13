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
	
	friend istream& operator >>(istream &din,A &obj)
	{
		cout<<"Enter value of A : ";
		cin>>obj.a;
		cout<<"Enter value of B : ";
		cin>>obj.b;
		cout<<endl;
		return din;
		
	}
	friend ostream& operator << (ostream& dout,A &obj)
	{
		cout<<"Value of A : "<<obj.a<<endl;
		cout<<"Value of B : "<<obj.b<<endl;
		return dout;
	}
};
int main()
{
	A obj;
	cin>>obj;
	cout<<obj;
	return 0;
}
