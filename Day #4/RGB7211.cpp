#include <iostream>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	if (a>89 && a<=100)
		cout<<"A";
	if (a>79 && a<=89)
		cout<<"B";
	if (a>69 && a<=79)
		cout<<"C";
	if (a>59&& a<=69)
		cout<<"D";
	if (a>0 && a<=59)
		cout<<"F";
}

