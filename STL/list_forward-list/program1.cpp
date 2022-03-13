// Josephus problem
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"Enter number of person"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the person to be killed"<<endl;
	int k;
	cin>>k;
	
	list<int> l;
	int i;
	for(i = 0 ; i<n ; i++)
	{
	   l.push_back(i);
	}
	auto it = l.begin();
	int count = 0;
	while(l.size() > 1)
	{
		for(int i = 1 ;i<k ; i++)
		{
			it++;
			if(it == l.end())
			it = l.begin();
		}
		it = l.erase(it);
		if(it == l.end())
		it = l.begin();
	}
	cout<< l.front();
	return 0;
}

