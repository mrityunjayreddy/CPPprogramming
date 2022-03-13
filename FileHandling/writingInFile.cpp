#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofs("Test.txt"); //a dynamic object of ofstream can't be created
	ofs<<"Mrityunjay is ";
	ofs<<21;
	ofs<<" Lovely";
	ofs.close();
	return 0;
}
//ofstream has two modes append and truncate
//ofstream is by default set to truncate
//ios::app for append and ios::trunc for truncate

