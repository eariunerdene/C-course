#include <iostream>
using namespace std;
int main(){
	int n;
	//cin>>n;
	n=5;
	for(int i=1;i<=n;i++){
		for(int j=n;i<=j-1;j--){
			cout<<" ";
	}
		
		for(int j=1;j<=i;j++){
			if(j==1 || i==n || i==j )	
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
