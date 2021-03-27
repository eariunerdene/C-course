#include <iostream>
using namespace std;
int main(){
	int n=5;
	//cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
		cout<<" ";
			}
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}

/*
i 01234-j
0     *****   
1    *****
2   *****
3  *****
4 *****
  
*/
