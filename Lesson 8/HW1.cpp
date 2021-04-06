#include <iostream>
using namespace std;
void hariu(int, int);
int main(){
	int a,b;
	cin>>a>>b;
	hariu(a,b);
	
	return 0;
}

void hariu(int x,int y){
	for(x=x;x<y;x++){
		cout<<x<<" ";
	}
	
}
