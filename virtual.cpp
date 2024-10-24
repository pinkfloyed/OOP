#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class animal{
public:
	virtual void sound()
	{
		cout<<"animals"<<endl;
	}

};
class cat:public animal{
	public:
    void sound() override{
		cout<<"cat mews"<<endl;
    }
};
int main()
{
	cat c;
	animal a;
	a.sound();
	c.sound();
}
