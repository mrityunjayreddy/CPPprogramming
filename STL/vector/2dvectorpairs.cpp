#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
	vector<vector<pair<int,int>>> v1;
	
	int i,j;
	
	for(i=0 ;i<2;i++)
	{
		int a,b;
		pair<int,int> p;
		vector<pair<int,int>> t;
		for(j=0;j<2;j++)
		{
			cin>>a>>b;
			p = {a,b};
			t.push_back(p);
		}
		v1.push_back(t);
	}
	sort(v1.begin(),v1.end());
	for(i = 0 ; i<2 ;i++)
	{
		for(j =0;j<2;j++)
		{
			cout<<v1[i][j].first<<" "<<v1[i][j].second<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
