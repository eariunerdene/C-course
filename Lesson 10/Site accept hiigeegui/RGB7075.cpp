#include <iostream>
using namespace std;
int main(){
	
	//RG7075 site accept hiigegui
	
	int num,sum=0;
	cin>>num;
		for(int i=1;i<=num;i++){
			sum=sum+i*i*i;
		}
		
		cout<<sum;
	return 0;
}
