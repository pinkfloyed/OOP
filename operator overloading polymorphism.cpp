/// operator overloading polymorphism
#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
	int im,re;
public:
	Complex(int r=0,int i=0)
	{
		im=i;
		re=r;
	}
	Complex operator + (Complex const &ob)
	{
		Complex res;
		res.im=im+ob.im;
		res.re=re+ob.re;
		return res;
	}
	void print()
	{
		cout<<re<<"+i"<<im<<'\n';
	}
};
int main()
{
	Complex c1(12,7);
	Complex c2(6,7);
	Complex c3=c1+c2;
	c3.print();
}
