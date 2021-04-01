#include <iostream>
using namespace std;
int main(){
	int n;
	//cin>>n;
	n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"-";
		}
		for(int j=0;j<=(n-i-1)*2;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
