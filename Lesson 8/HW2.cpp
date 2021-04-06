#include <iostream>
using namespace std;
int maxFind(int,int);
int minFind(int,int);

int main(){
	int a,b,max=0,min=0;
	cin>>a>>b;
	max=maxFind(a,b);
	min=minFind(a,b);
	cout<<"Maximum: "<<max<<endl;
	cout<<"Minimum: "<<min;
}

int maxFind(int x, int y){
	if(x>y){
	return (x);
	}
	else
	return(y);
}

int minFind(int x, int y){
	if(x<y){
	return (x);
	}
	else
	return(y);
}
