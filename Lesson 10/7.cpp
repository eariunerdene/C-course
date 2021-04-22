#include <iostream>
using namespace std;
int print(int);
int main(){
	int num;
	cin>>num;
	print(num);
	
	return 0;
}

int print(int num){
	
	
	for(int i=0;i<num;i++){
		cout<<num;
	}
}
