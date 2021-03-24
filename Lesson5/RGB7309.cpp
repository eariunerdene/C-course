#include <iostream>
using namespace std;
int main()
{
	/*
	Ogogdson too palindrom bol YES ugui bol NO gj hevlene
	Input: 12321
	Output: YES
	*/
	int n,temp,reverse=0,a; 
	cin>>n; 
	temp=n;
	for(;n>0;n/=10)
		{
			a=n%10;
			reverse=reverse*10+a;
		}
		cout<<reverse<<endl;
		if(temp==reverse)
			cout<<"YES";
		else
			cout<<"NO";
}
