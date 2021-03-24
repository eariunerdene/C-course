#include <iostream>
using namespace std;
int main()
{
	/*
	Toon dahi baga tsifriig oloh
	Input:9649
	Output:4
	*/
	int i,n,min=9;
	cin>>n;
	for(;n>0;n=n/10){
		i=n%10;
		if(min>i)
		min=i;
	}
	cout<<min;
}
