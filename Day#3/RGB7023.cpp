#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d; // 100 80 50 148
	cin>>a>>b>>c>>d;
	if (a<80) 
		a=0;
	if (b<80) 
		b=0;
	if (c<80)
		c=0;
	if (d<80)
		d=0;
	cout<<a+b+c+d;
}
