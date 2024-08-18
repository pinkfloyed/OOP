/// access to private member

/// obj in array
#include<bits/stdc++.h>
using namespace std;

class student
{
	string name;
	public:
	int age;
	bool gender;

	void setname(string s)
	{
		name=s;
	}
	void getname() /// ei function diyeo print kora jay
	{
		cout<<name<<'\n';
	}
	void print()
	{
		cout<<name<<'\n';
		cout<<age<<'\n';
		cout<<gender<<'\n';
	}
};
int main()
{
	student a[3];
	for(int i=0;i<3;i++)
	{
		string s;
		cin>>s;
		a[i].setname(s);
		cin>>a[i].age>>a[i].gender;
	}
	for(int i=0;i<3;i++)
	{
		a[i].print();
	}
}
