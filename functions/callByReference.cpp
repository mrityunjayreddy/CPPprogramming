#include<iostream>
using namespace std;
//this function is to demonstrate call by reference by subtracting to values

int subtract(int *a,int *b) //in call by reference the formal parameters are actually pointers
{
	return *a-*b;
}
int main()
{
	int a = 10 ,b =20;
	int s = subtract(&b,&a); //in call by refernce address of acutal parameters are copied in formal parameters
	cout<<"The answer is : "<<s;
	return 0;
}
