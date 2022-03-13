#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(5,10);
	
	vector<int>::iterator i;
	
	cout<<v1.front()<<" ";
	cout<<v1.back()<<endl;
	
	v1.insert(v1.begin()+2,121);
	
	

	
	for(i = v1.begin() ; i!=v1.end() ; i = next(i))
	cout<<*i<<" ";
	return 0;
}
