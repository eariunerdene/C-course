#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
				if(j>=n-i+1)
				cout<<j<<" ";
			}
		cout<<endl;	
		}
		
}

/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
