///abstraction
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class office
{
public:

	void call()
	{
		cout<<"Hi ! I am BOSS"<<'\n';
	}
	virtual void print()=0;
};
class employee:public office
{

public:
	void print()
	{
		cout<<"Hi ! I am employee"<<'\n';
	}
};
class user:public office
{

public:
	void print()
	{
		cout<<"Hi ! I am user"<<'\n';
	}
};
int main()
{
	office *s;
	employee e;
	user u;
    s->call();
	s=&e;
	s->print();

	s=&u;
	s->print();
}

