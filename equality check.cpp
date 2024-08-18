/// equality check
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	char a[100],b[100];
	cin>>a>>b;
	int v=strcmp(a,b);
	if(v==0)
	{
		cout<<"equal"<<'\n';
	}
	else
		cout<<"Not equal"<<'\n';

}
