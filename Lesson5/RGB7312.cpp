#include <iostream>
using namespace std;
int main ()
{
	/*
	
	*/
	int i=1,count=0,n;
	cin>>n;
	for(;n%i==0;i++){
		{
			n=n/i;
			count++;
		}
		
	}
	if(n==1)
	cout<<count;
	else
	cout<<"No";
}
