#include <iostream>
using namespace std;
string too(int);
int main(){
	int a;
	string b;
	cin>>a;
	b=too(a);
	cout<<b;
	return 0;
}
string too(int x){
	if(x%2==0){
		return("Tegsh");
	}
	else
		return("Sondgoi");
}
/*
Ogson toog tegsh sondgoi esehiig oldog recursive function
*/
