#include<iostream>
using namespace std;
class A
{
	int size;
	int *ptr;
	public:
		A(int *p = new int,int s = 0)
		{
			ptr = p;
			size = s;
		}
		int& operator [](int a)
		{
			if(a>size || a<0)
			cout<<"Index out of bounds";
			else
			return ptr[a];
		}
		
};
int main()
{
	A obj(new int,5);
	A obj1[5];
	int i =0;
	for(i =0 ;i<5 ;i++)
	{
		obj[i]= i;
	}
		for(i =0 ;i<5 ;i++)
	{
		cout<<obj[i];
	}
	return 0;
}
