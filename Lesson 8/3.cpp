#include <iostream>
using namespace std;
float sum(float, float);
int main(){
	
	float a,b,hariu;
	cout<<"Ta toogoo oruulna uu";
	cin>>a>>b;
	hariu=sum(a,b);
	cout<<hariu;
}

float sum(float x, float y){
	return x+y;
}
