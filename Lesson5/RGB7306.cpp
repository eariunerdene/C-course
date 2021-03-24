#include <iostream>
using namespace std;
int main()
{
	/*
	Ogogdson toonii ihii tsifriig oloh
	Input: 9652
	Output:9
	*/
	int i,n,max=0;
	cin>>n;
	for(;n>0;n=n/10){
		i=n%10;
		if(i>max)
		max=i;
	}
	cout<<max;
}
