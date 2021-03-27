#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			
			if(i==1 || i==n || j==1|| j==n){
			cout<<"*";
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
/*
0 1 2 3 4 5
1 * * * * *
2 *       *
3 *       *
4 *       *
5 * * * * *   
*/
/*
0 1 2 3 4 5
1 - - - - * * * * *
2 - - - *       *
3 - - *       *
4 - *       *  
5 * * * * *         
*/
