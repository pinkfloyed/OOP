/// exception handling
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	while(1){ /// jotobar iccha loop cholbe jotokhn shotti loop ta
	try{
	int a,b;
	cin>>a>>b;
	if(b%2==0)
	{
		throw -1;
	}
	double area=(double)a/b; /// 10 0 =inf jodi exception handling na kora hoy
	cout<<area;
	}
	catch(int x)
	{
		cout<<"not possible"<<'\n';
	}
	}
}
