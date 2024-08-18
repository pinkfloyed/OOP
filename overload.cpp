///overload
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
	public:
	string name;
	int age;
	bool gender;
	student(string a,int b,bool c)
	{
		name=a;
		age=b;
		gender=c;
	}
	student(student &x)
	{
		name=x.name;
		age=x.age;
		gender=x.gender;
	}
	bool operator==(student &x)
	{
		if(name==x.name && age==x.age && gender==x.gender)
			return 1;
		else
			return 0;
	}
};
int main()
{
	student a("pinki",20,1);
	student b("akter",38,0);
	student c=a;
	if(c==a)
	{
		cout<<"same"<<'\n';
	}
	else
		cout<<"not same"<<'\n';
	if(c==b)
	{
		cout<<"same"<<'\n';
	}
	else
		cout<<"not same"<<'\n';

}
