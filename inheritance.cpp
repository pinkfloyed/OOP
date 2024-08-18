///inheritance
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class teacher
{
	public:
	string name;
	int age;

	void print()
	{
		cout<<name<<" "<<age<<" ";
	}
};
class student:public teacher
{
public:
	int id;
	void display()
	{
		print();
		cout<<id<<" "<<'\n';

	}
};
int main()
{
	student a;
	a.name="pinki";
	a.age=20;
	a.id=96;
	a.display();
}
