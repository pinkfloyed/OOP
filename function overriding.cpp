/// function overriding
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class teacher
{
	public:
	void print()
	{
		cout<<"I am teacher"<<"\n";
	}
};
class student:public teacher
{
	public:
	void print()
	{
		cout<<"I am student1"<<"\n";
	}
};
class person:public teacher
{
	public:
	void print()
	{
		cout<<"I am person"<<"\n";
	}
};
int main()
{
	teacher t;
	t.print();

	student s;
	s.print();

	person p;
	p.print();
}
