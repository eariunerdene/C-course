#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a;
	b=a/3600;
	c=a%3600/60;
	d=a%3600%60;
	cout<<b<<" "<<c<<" "<<d;
}
