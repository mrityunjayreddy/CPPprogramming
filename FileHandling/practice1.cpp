#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	ifstream ifs("practice1.txt");
	string s;
	int i=0;
	ifs>>s;
	cout<<s;
	return 0;
}
