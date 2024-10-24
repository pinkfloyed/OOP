#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class animal{
  public:
  	static int c;
  	animal()
  	{
  		c++;
  	}
};
int animal::c=0;
int main()
{
	animal a1,a2;
	cout<<animal::c<<endl;
}
