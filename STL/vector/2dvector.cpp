#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<vector<int>> v1;
	int i = 0,j = 0;
	
	for(i =0 ;i<6;i++)
	{
		vector<int> t1; // important step
		int val;
		for(j=0;j<2;j++)
		{
			cin>>val;
			t1.push_back(val);
		}
		v1.push_back(t1);
	}
	
	for(i = 0 ;i<6;i++)
	{
		for(j = 0;j<2;j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

