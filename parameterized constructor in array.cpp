/// parameterized constructor in array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
	public:
	string name;
	ll age;
	bool gender;
	student()
	{

	}
	student(string aa,ll b,bool g)
	{
		name=aa;
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
	ll n;
	cin>>n;
	student a[n];
	for(ll i=0;i<n;i++)
	{
		string aa;
		ll b;
		bool c;
		cin>>aa>>b>>c;
		a[i]=student(aa,b,c);
	}
	for(ll i=0;i<n;i++)
	{
		a[i].print();
	}
}


