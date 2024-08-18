/// constructor initializer or member initializer list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
public:
	const int addmissionfee;
    const int examfee;
	student(int x,int y)
	:addmissionfee(x),examfee(y) ///constant value  shathe shathe initialize na krle member initializer diye...
	{
		cout<<addmissionfee<<'\n'<<examfee<<'\n';
	}
};
int main()
{
	student a(50000,30000);
}
