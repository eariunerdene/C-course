#include <iostream>
using namespace std;
float sum(float, float);
int main(){
	
	float a,b,hariu;
	char uildel;
	cout<<"Ta toogoo oruulna uu";
	cin>>a>>b;
	cout<<"Ta + temdeg oruulna uu";
	cin>>uildel;
	if(uildel == '+'){
		hariu=sum(a,b);
		cout<<hariu;
	}
	else
	cout<<"Buruu temdeg oruulsan bna.";
	
}

float sum(float x, float y){
	return x+y;
}
