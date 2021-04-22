#include <iostream>
using namespace std;

//RGB7501 massive eyreg toonii niilber

int main(){
	int capacity[100];
	int num,sum=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>capacity[i];
	}
	
	for(int i=0;i<num;i++){
		if(capacity[i]>0){
			sum=sum+capacity[i];
		}
		
	}
	cout<<sum;
}
