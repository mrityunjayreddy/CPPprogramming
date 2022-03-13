//this is a program to demonstrate template classes
#include<iostream>
using namespace std;
template<class T>
class Rectangle
{
	T length;
	T breadth;
	public:
		Rectangle()
		{
			this->length = 0;
			this->breadth = 0;
		}
		Rectangle(T l,T b)
		{
			this->length = l;
			this->breadth = b;
		}
		T area()
		{
	return length*breadth;
      }
		T perimeter();
};
template<class T>
T Rectangle<T>::perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	Rectangle<int> obj1(10,20);
	cout<<"Area is : "<<obj1.area()<<" ";
	cout<<"Perimeter : "<<obj1.perimeter()<<endl;
	
	Rectangle<double> obj2(30,40);
	cout<<"Area is : "<<obj2.area()<<" ";
	cout<<"Perimeter : "<<obj2.perimeter()<<endl;
	
	
	return 0;
}
