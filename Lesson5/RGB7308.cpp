#include <iostream>
using namespace std;
int main()
{
	/*
	Ogogdson toonii tongorson toog oloh
	input:9651
	output: 1569
	*/
	int num,reverse=0,a;  
	cin>>num;
	while(num>0){
	a=num%10;
	reverse=reverse*10+a;
	num=num/10;
	}
	cout<<reverse;
}

