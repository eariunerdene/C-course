#include <iostream>
using namespace std;
int main ()
{
	/*
	ogogdson 2 toog huraah
	input: 9 15
	output: 3/5
	*/
	int a,b,tempa,tempb;
	cin>>a>>b;
	tempa=a;
	tempb=b;
	if(b>a){
	for(;b%a!=0;a=b%a){
	}
		cout<<tempa/a<<"/"<<tempb/a;
	}
	else{
	for(;a%b!=0;b=a%b){
	}
		cout<<tempa/b<<"/"<<tempb/b;
	
	}
}
