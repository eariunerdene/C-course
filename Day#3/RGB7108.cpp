#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a%2==0)
		a=1;
	if (b%2==0)
		b=1;
	if (c%2==0)
		c=1;
	cout<<a*b*c;
}
