#include<iostream>
using namespace std;

// the main function of the constructor is to initialise the data members of the class
class A
{
	int val1;
	int val2;
	public:
		A();		// a constructor is always the public member of the class it can't be private
};

A::A() //a constructor is a function which is always executed at the start of the program
{
	cout<<"I am the constructor and I am always executed first"<<endl;
	val1 = 0;
	val2 = 0;
}

int main()
{
	A obj; // a constructor is called as soon as the object of the class is created
	return 0;
}
