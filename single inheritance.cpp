/// single inheritance
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class A
{
	public:
	ll a;
	void funca()
	{
		cout<<"parent class"<<'\n';
	}
};
class B:public A
{

};
int main()
{
	B ob;
	ob.funca();
}
