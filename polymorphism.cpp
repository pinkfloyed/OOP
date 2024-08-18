/// polymorphism example
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class shape
{
public:
	double d1;
	double d2;

	shape(double d1,double d2)
	{
		this->d1=d1;
		this->d2=d2;
	}
	virtual double area()
	{
		return 0;
	}
};
class triangle:public shape
{
	/// d1,d2 automatically inherit hbe
public:
	triangle(double d1,double d2)
	:shape(d1,d2)///shape class r constructor call krbe
	{

	}
	double area()
	{
		return 0.5*d1*d2;
	}
};
class rectangle:public shape
{
	/// d1,d2 automatically inherit hbe
public:
	rectangle(double d1,double d2)
	:shape(d1,d2)///shape class r constructor call krbe
	{

	}
	double area()
	{
		return d1*d2;
	}
};
int main()
{
	shape *s;
	triangle t(10,20);
	rectangle r(10,20);

	s=&t;
	cout<<"triangle= "<<s->area()<<'\n';

	s=&r;
	cout<<"rectangle= "<<s->area()<<'\n';
}
