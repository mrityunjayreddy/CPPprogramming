#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs("Test.txt");
	string s;
	int a;
	string c;
	ifs>>s;
	ifs>>a;
	ifs>>c;
	cout<<s<<" "<<a<<" "<<c;
	return 0;
}
