#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1 = {1,2,3,4,5};
	vector<int>::iterator i;
	
	for(i = v1.end() - 1 ; i>=v1.begin() ;i = prev(i))
	cout<<*i;
	return 0;
}
