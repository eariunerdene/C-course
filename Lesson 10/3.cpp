#include <iostream>
using namespace std;
int main (){
	int num[10]={1,-100,50,-80,30,20,30,40,-80,-99};
	for(int i=0;i<=10;i++){
		if(num[i]>=0){
			cout<<num[i]<<endl;
		}
	}
	
	return 0;
	
}
