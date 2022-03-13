//the main function to define namespaces is to avoid name related conflicts
#include<iostream>
using namespace std;

namespace first   //this is how a namespace is defined
{
	void fun()
	{
		cout<<"This is fun of first "<<endl;
	}
}
namespace second
{
	void fun()
	{
		cout<<"This is fun of second"<<endl;
	}
}

int main()
{
	first::fun();  //a namespace is used with a scope resolution operator
	second::fun();
	//both the functions above have the same name but since they belong to separate namespaces the name conflict has been avoided
	return 0;
}
