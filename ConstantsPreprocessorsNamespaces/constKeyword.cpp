#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int x = 20; //these are normal variables
	const int b = 20;  //this is a constant variable its value can't be change
	const int *ptr = &a; //this is a pointer which can't modify the value of address its pointing to but it can point to a new address
	
	// int const *ptr is same as const int *ptr
	
	const int *const p = &x; //this is constant pointer whose pointing address can't be modified nor it can modify the value of address its poitning to
	return 0;
}
