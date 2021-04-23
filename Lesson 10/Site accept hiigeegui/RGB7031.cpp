#include <iostream>
using namespace std;

//site accept hiigeegui

float print(float,float,float);
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	print(a,b,c);
	return 0;
}

float print(float a,float b,float c){
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<(a+b+c)/2;
}
