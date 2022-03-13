#include<iostream>
using namespace std;
void sum(int,int);
//this is a program to demonstrate call by value by adding two numbers


void sum(int a,int b) // this is a non returnable function 
{                                 // the parameters a,b are called formal parameters 
cout<<"Sum is : "<<a+b<<endl;	
}

int main()
{
	sum(10,20); //in call by value entire value is passed to the function
	return 0;
}
