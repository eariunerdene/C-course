#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a%2!=0)
		a=0;
	if (b%2!=0)
		b=0;
	if (c%2!=0)
		c=0;
	cout<<a+b+c;
}
