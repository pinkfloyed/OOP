/// friend class
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class A
{
private:
	string name="pinki";
	int age=96;
public:
	friend class B; /// B class jeno class a r private value access krte pare

};
class B
{
public:
	void display(A ob)
	{
		cout<<ob.name<<'\n'<<ob.age<<'\n';
	}
};
int main()
{
	A ob1;
	B ob2;
	ob2.display(ob1); /// A class  r object print krte ob1
}
