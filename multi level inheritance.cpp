/// multi level inheritance
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
class B : public A
{
	public:
	ll b;
	void funcb()
	{
		cout<<"parent class 2"<<'\n';
	}
};
class C:public B /// class b r public protected attributes inherit krbe
{

};
int main()
{
	C ob;
	ob.funca();
	ob.funcb();
}


