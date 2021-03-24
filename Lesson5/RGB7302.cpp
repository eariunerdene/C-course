#include <iostream>
using namespace std;
int main ()
{
	/*
	Ogogdson toonii tsifruudiin niilberig oloh
	Input: 521
	Output:8
	*/
	int n,i,sum=0;
	cin>>n;
	for(;n>0;n=n/10)
	{
		sum+=n%10;
	}
	cout<<sum;
}
