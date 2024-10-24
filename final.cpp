#include<bits/stdc++.h> /// call base class constructor without creating objects
using namespace std;
typedef long long ll;
class animal{
public:
	virtual void sound() final
	{
		cout<<"animals sound"<<endl;
	}
};
class cat:public animal{
   /*public:
   	void sound() override   /// error because can't change value as declared as final
	{
		cout<<"cats sound"<<endl;
	}
	*/
};
int main()
{
	animal a;
}



