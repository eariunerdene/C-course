#include <iostream>
using namespace std;
int main ()
{
	int a,b,c; // 15 16 5
	cin>>a>>b>>c;
	if (a>b)
		cout<<a;
	if (c>b)
		cout<<c;
	else cout<<b;
	return 0;
}
