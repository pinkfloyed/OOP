#include<bits/stdc++.h> /// call base class constructor without creating objects
using namespace std;
typedef long long ll;
class animal{
public:
	animal()
	{
		cout<<"animals"<<endl;
	}
};
class cat:public animal{
	public:
		cat():animal()
		{
		  cout<<"cat mews"<<endl;
		}
};
int main()
{
	cat c;
}


