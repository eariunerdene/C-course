#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a<b && a<c && a<d)
	cout<<a;
	if (b<a && b<c && b<d)
	cout<<b;
	if(c<a && c<b && c<d)
	cout<<c;
	
	else
	cout<<d;
		
	return 0;
}
