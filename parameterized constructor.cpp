/// parameterized constructor
#include<bits/stdc++.h>
using namespace std;

class student
{
	public:
	string name;
	int age;
	bool gender;
	student(string a,int b,bool g)
	{
		name=a;
		age=b;
		gender=g;
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
	student a("pinki",20,1);
	a.print();
}
