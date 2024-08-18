///library functions
#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
int main()
{
	char a[200],b[200],c[200];
	cin>>a;
	int l=strlen(a);
	cout<<l<<'\n';

	strcpy(b,a);
	cout<<"b="<<b<<'\n';

	cin>>c;
	strcat(a,c);
	cout<<"a="<<a<<'\n';

    char name[200];
    cin>>name;
    strupr(name);
	///char *strupr(char *name);
	cout<<name<<'\n';

	///char *strlwr(char *name);
	strlwr(name);
	cout<<name<<'\n';

}
