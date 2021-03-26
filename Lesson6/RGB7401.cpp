#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>0;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
5
54321
54321
54321
54321
54321
*/
