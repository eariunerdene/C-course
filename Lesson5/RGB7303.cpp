#include <iostream>
using namespace std;
int main()
{
	/*
	Ogogdson toonii tegsh tsifruudiin niilberiig oloh
	input: 9652
	output: 8
	*/
	int n,i,sum=0;
	cin>>n;
	for (;n>0;n=n/10){
		i=n%10;
		if(i%2==0)
		sum+=i;
	}
	cout<<sum;
}
