#include<iostream>
using namespace std;
//this program is to demonstrate pass by reference 


void multiply(int &a,int &b) //in this program 
{
	cout<<"The product is : "<<a*b<<endl;
}
int main()
{
	int x =10 ,y=20;
	multiply(x,y);
	return 0;
}
