#include<iostream>
using namespace std;

class Array
{
	int *A;
	public:
	int size;
	int length;
	
	Array()
	{
		length = 0;
		size = 1;
		A = new int[size];
		
	}
	
	Array(int s)
	{
		length = 0;
		size = s;
		A = new int[size];
	}
	
	void resize()
	{
		int *b = new int[size*2];
		int i = 0;
		for(i = 0;i<length;i++)
		b[i] = A[i];
		int *temp = A;
		A = b;
		delete []temp;
	}
	
	void push(int x)
	{
		if(length == size)
		{
			resize();
			A[length++] = x;
			
		}
		else{
			A[length++] = x;
		}	
	}
	
	void insert(int e,int pos)
	{
			int i =0;
	     	for( i = length ;i<= pos; i--){
			A[i] = A[i-1];
		   }
		    A[pos] = e;
		    length++;
		
	}
	
	int erase(int pos)
	{
		int i = 0; int t = 0;
		t = A[pos];
		for(i = pos; i<length ;i++)
		A[i] = A[i+1];
		length--;
		return t;
	}
	
	int pop()
	{
		int t = A[length - 1];
		length--;
		return t;
	}
	
	void display()
	{
		int i =0;
		for(i=0;i<length;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
	};
int main()
{
	Array arr;
	arr.push(10);
	arr.push(20);
	arr.push(30);
	arr.push(40);
	arr.push(50);
	
	arr.display();
	arr.insert(11,2);
	arr.display();
	
	arr.pop();
	
	arr.display();
	return 0;
}
