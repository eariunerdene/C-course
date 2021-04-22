#include <iostream>
using namespace std;

//RGB7500 Massive niilber bodlogo

int main(){
	int capacity[100];
	int num,sum=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>capacity[i];
	}
	
	for(int i=0;i<num;i++){
		sum=sum+capacity[i];
	}
	cout<<sum;
}
