#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(10);
	vector<int>::iterator i;
	for(i = v1.begin() ; i!=v1.end() ; i = next(i))
	cin>>*i;
	
	for(i = v1.begin() ; i!=v1.end() ; i = next(i))
	cout<<*i<<" ";
	return 0;
}
