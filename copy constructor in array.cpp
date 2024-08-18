/// copy constructor in array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
public:
	string name;
	ll age;
	bool gender;

	student() /// default constructor
	{

	}
	student(string a,ll b,bool c) /// parameterized constructor
	{
		name=a;
		age=b;
		gender=c;
	}

	student(student &a) ///copy constructor
	{
		name=a.name;
		age=a.age;
		gender=a.gender;
	}
	void print()
	{
		cout<<name<<" "<<age<<" "<<gender<<'\n';
	}
};

int main()
{
	ll n;
	cin>>n;
	student a[n],c[n];
	for(ll i=0;i<n;i++)
	{
		string s;
		ll x;
		bool y;
		cin>>s>>x>>y;
		a[i]=student(s,x,y);
	}
    for(ll i=0;i<n;i++)
	{
		a[i].print();
	}
	for(ll i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(ll i=0;i<n;i++)
	{
		c[i].print();
	}

}

