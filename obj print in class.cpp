/// obj print in class in array
#include<bits/stdc++.h>
using namespace std;

class student
{
	public:
	string name;
	int age;
	bool gender;
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
		cin>>a[i].name>>a[i].age>>a[i].gender;
	}
	for(int i=0;i<3;i++)
	{
		a[i].print();
	}
}

