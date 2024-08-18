///function overloading polymorphism
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class ok
{
	public:
	void funca()
	{
		cout<<"parent class 1"<<'\n';
	}
	void funca(int x)
	{
		cout<<"parent class 2"<<'\n';
	}
	void funca(double y)
	{
		cout<<"parent class 3"<<'\n';
	}
};
int main()
{
	ok obj;
	obj.funca();
	obj.funca(96);
	obj.funca(70.96);
}
