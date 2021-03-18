#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a%11==0) a=0;
	if (b%11==0) b=0;
	if(c%11==0) c=0;
	if(d%11==0) d=0;
	cout<<a+b+c+d;
}
