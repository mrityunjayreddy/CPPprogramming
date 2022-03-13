#include<iostream>
using namespace std;

void display() // this is a non returnbable function
{
	cout<<"Hello I am a non returnable function called display"<<endl;
}

int test() //this is a returnable function
{
	return 100; //this function always returns a value of 100
}


int main()
{
	display(); // syntax to call a non returnable function
	
	cout<<test(); // syntax to call a returnable function
	return 0;
}
