#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j=0;
	cin>>n;
	while(i<=n){
		if(i%2==0){
		j+=i;
		}
		i++;
	}
		cout<<j<<" ";
}
