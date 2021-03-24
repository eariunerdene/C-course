#include <iostream>
using namespace std;
int main ()
{
	/*
	Ogogdson toonoos ogogdson tsifr heden udaa orsniig tooloh
	input:52411 1
	output: 2 
	*/
	int n,i,count=0,temp;
	cin>>n>>i;
	for(;n>0;n=n/10){
		
		temp=n%10;
		if(temp==i)
		count++;
	}
	cout<<count;
}
