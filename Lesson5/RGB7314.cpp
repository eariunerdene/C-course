#include <iostream>
using namespace std;
int main ()
	/*
	Ogogdson 2 toonii hamgiin baga yronhii huvaagdagchiig ol
	*/
{
	int a,b,i=1,j=1;
	cin>>a>>b;
	if(a>b){
		for(;j%b!=0;i++){
			j=a*i;
			
		}
		cout<<j;
	}
	else{
		for(;j%a!=0;i++){
			j=b*i;
		}
		cout<<j;
	}
		
}
