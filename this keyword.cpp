///this keyword
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
	public:
	string name;
	int age;
	student(string name,int age)
	{
		this->name=name;
		this->age=age;
	}
	void print()
	{
		cout<<name<<" "<<age<<'\n';
	}

};
int main()
{
	student ob("pinki",20);
	ob.print();
}
