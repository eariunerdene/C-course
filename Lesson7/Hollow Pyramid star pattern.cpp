#include <iostream>
using namespace std;
int main(){
	int n;
	//cin>>n;
	n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<=i*2;j++){
			if(j==0 || i==n-1 || j==i*2)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
