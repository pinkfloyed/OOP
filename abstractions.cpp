#include<bits/stdc++.h> /// Abstract classes are created using pure virtual functions in C++/ Interface same in c++
using namespace std;
typedef long long ll;
class animal{
public:
	virtual void sound()=0;
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
	c.sound();
}

