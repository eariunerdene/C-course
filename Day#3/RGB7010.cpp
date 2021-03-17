#include <iostream>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	cout<<(a/100)+((a-a/100*100)/10)+((a-a/100*100)%10);
}
