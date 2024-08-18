/// operator overriding polymorphism
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class base
{
	public:
	virtual void funca() /// virtual function
	{
		cout<<"parent class 1"<<'\n';
	}
	void funcb()
	{
		cout<<"parent class 2"<<'\n';
	}
};
class derived:public base
{

};
int main()
{
	base *p;
	derived d;
	p=&d;
	p->funca();
	p->funcb();
}
