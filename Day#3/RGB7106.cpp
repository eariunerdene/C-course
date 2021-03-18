#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a>5) 
		a=1;
	if (b>5) 
		b=1;
	if (c>5)
		c=1;
	if (d>5)
		d=1;
	cout<<a*b*c*d;
}
