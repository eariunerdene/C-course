#include <iostream>
using namespace std;
int main ()
{
	/*
	Ogogdson toon dahi sondgoi tsifruudiin toog oloh
	input:626941
	output:2
	*/
	int n,i,count=0;
	cin>>n;
	for(;n>0;n=n/10){
		i=n%10;
		if(i%2!=0)
		count++;
	}
		cout<<count;
}
