#include<iostream>
#include<list>
#include<vector>
using namespace std;

struct newDataStruct
{
	public:
	list<int> l;
	void insert(int x)
	{
		l.push_back(x);
	}
	
	void replace(int x, vector<int> v)
	{
		list<int> t(v.begin(),v.end());
		auto it = l.begin();
		for(auto i : l)
		{
			if(i == x)
			{
				it = l.erase(it);
				l.insert(it,t.begin(),t.end());
			}
			it++;
		}
	}
	
	void print()
	{
		for(auto it = l.begin(); it!=l.end() ; it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	newDataStruct nds;
	nds.insert(10);
	nds.insert(20);
	nds.insert(30);
	nds.print();
	nds.replace(20, {1,2,3});
	nds.print();
	
	return 0;
}
