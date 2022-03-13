//this program is to demonstrate serialisation of file stream
#include<iostream>
#include<fstream>
using namespace std;
class info
{
	public:
	string n;
	int age;
	string proffesion;  
	
	    info()
	    {
	    	
		}
		info(string name,int a,string proff)
		{
			n = name;
			age = a;
			proffesion = proff;
		}
		friend ofstream& operator<<(ofstream& dof,info& obj) 
		{
			dof<<obj.n<<obj.age<<obj.proffesion;
			return dof;	
		}
		friend ifstream& operator>>(ifstream& dif,info& obj)
		{
			dif>>obj.n>>obj.age>>obj.proffesion;
		}
};
int main()
{
	info obj1("Mrityunjay ",21," Engineer");
	info obj2;
	ofstream ofs("Test2.txt");
	ofs<<obj1;
	ofs.close();
	
	ifstream ifs("Test2.txt");
	ifs>>obj2;
	string name = obj2.n;
	int age = obj2.age;
	string proff = obj2.proffesion;
	ifs.close();
	
	cout<<name<<" "<<age<<" "<<proff;
	
		return 0;
}
