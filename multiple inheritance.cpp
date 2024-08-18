/// multiple inheritance
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class A
{
	public:
	ll a;
	void funca()
	{
		cout<<"parent class 1"<<'\n';
	}
};
class B
{
	public:
	ll b;
	void funcb()
	{
		cout<<"parent class 2"<<'\n';
	}
};
class C:public A,public B /// class a class b r public protected attributes inherit krbe
{

};
int main()
{
	C ob;
	ob.funca();
	ob.funcb();
}

