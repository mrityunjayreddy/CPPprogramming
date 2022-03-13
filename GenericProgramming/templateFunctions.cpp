//this program demonstrates the working of template functions involving primitive types
#include<iostream>
using namespace std;
template<class T> //syntax of a template
T maximum(T x,T y)
{
	return x>y?x:y;
}

template<class T,class X>
X sum(T a , X b)
{
	return a+b;
}
int main()
{
	int a = 10;
	int b = 30;
	cout<<"Maximum of integers "<<maximum(a,b)<<endl;
	cout<<"Maximum of double "<<maximum(2.5,4.5)<<endl;
	cout<<"Maximum of characters "<<maximum('A','B')<<endl;
	
	cout<<sum(9,0.2f);
	cout<<"Maximum of strings "<<maximum("World","Hello");
	return 0;
}
