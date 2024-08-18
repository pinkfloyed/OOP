/// encapsulation
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
	public:
	ll a;
	void funca()
	{
		cout<<"funca"<<'\n';
	}
	private:
	ll b;
	void funcb()
	{
		cout<<"funcb"<<'\n';
	}
    protected:
	ll c;
	void funcc()
	{
		cout<<"funcc"<<'\n';
	}
};
int main()
{
	student ob,x;
	ob.funca();
	///x.funcb(); private so baire thk access kora jabe na
}
