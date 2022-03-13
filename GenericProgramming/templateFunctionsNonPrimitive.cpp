#include<iostream>
using namespace std;
class A;
template<class T>
T minimum(T x,T y)
{
	return x<y?x:y;
}
class A
{
	public:
		int a;
		A(int x)
		{
			this->a = x;
		}
		bool operator<(A &obj)
		{
			if(this->a<obj.a)
			return true;
			else
			return false;
		}
};
int main()
{
	A obj1(10);
	A obj2(20);
	A obj3 = minimum(obj1,obj2);
	cout<<"The minimum is "<< obj3.a;
	return 0;
}
