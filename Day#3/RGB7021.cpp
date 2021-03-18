#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,max;
	cin>>a>>b>>c;
	if (a>b && a>c)
	max=a;
	if (b>c && b>a)
	max=b;
	else 
	max=c;
	cout<<max;
}
