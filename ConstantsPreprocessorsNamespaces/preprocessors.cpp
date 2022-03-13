#include<iostream>
using namespace std;

#define PI 3.124        //# - is called a preprocessor it can be used to define some values before hand
#define text "Hello World"

#define SQR(x)(x*x) //this is a preprocessor function that squares a number
#define MSG(x) #x //this is a preprocessor function that converts text to string


#ifndef  //this is used to define variables that are not defined beforehand
   #define r 10
#endif
int main()
{
	cout<<text<<endl;
	
	cout<<SQR(2)<<endl;
	
	cout<<MSG(I am a genius)<<endl;
	
	return 0;
}
