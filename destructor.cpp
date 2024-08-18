///destructor
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
public:
	string name;
	ll age;
	bool gender;
	student()
	{

	}
	student(string a,ll b,bool c)
	{
		name=a;
		age=b;
		gender=c;
	}
	student(student &a)
	{
		name=a.name;
		age=a.age;
		gender=a.gender;
	}
	~student() /// destroy kore dibe
	{

	}
};
int main()
{
	student x("pinki",20,1);
	student y;

}
