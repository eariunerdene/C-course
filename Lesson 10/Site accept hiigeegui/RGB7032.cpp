#include <iostream>
using namespace std;

//RGB7031 duguin talbai oloh site accept hiigeegui.
int main(){
	double l,s,p,r;
	cin>>l;
	cout.setf(ios::fixed); //taslaliin araas heden too gargahaa helehdee ashiglana
	cout.precision(4); 		//taslaliin araas heden too gargahaa helehdee ashiglana
	p=3.141592;
	r=l/2*p;
	s=p*r*r;
	cout<<s;
	return 0;
}
