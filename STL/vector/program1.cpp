#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1 = {12,3,7,23,43};
	sort(v1.begin(),v1.begin()+3);
	int i;
	for(i = 0 ;i<v1.size() ; i++)
	cout<<v1[i]<<" ";
	return 0;
}
