#include <iostream>
using namespace std;
int main(){
	int n=5;
	//cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0 || j==n-1 || i==0 || i==n-1|| i==j || j==n-i-1){
			cout<<"*";
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
}

/*
  1 2 3 4 5
1 * * * * *
2 * *   * *
3 *   *   *
4 * *  *  *
5 * * * * *
  
*/
