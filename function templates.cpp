/// function templates
#include<bits/stdc++.h>
using namespace std;
template<class myTemplate>
myTemplate add(myTemplate a,myTemplate b)
{
	return a+b;
}
int main()
{
	int x,y;
	cin>>x>>y;
	double p,q;
	cout<<add(x,y)<<'\n';

	cin>>p>>q;
	cout<<add(p,q)<<'\n';

}
