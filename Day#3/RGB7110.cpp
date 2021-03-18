#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,tool;
	cin>>a>>b>>c>>d;
	if (a%3==0) tool+=1;
	if (b%3==0)	tool+=1;
	if(c%3==0) tool+=1;
	if(d%3==0) tool+=1;
	cout<<tool;
}
