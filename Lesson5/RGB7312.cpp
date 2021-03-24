#include <iostream>
using namespace std;
int main ()
{
	/*
	Ogogdson too ymar negen toonii faktorial esehiig ol
	input: 24
	output:4
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
