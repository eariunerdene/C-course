#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,f,k,l,m,n;
	cin>>a>>b>>c>>d; //5-davhar 3-orts 4-heden haalga 32-toot e-neg ortson heden haalga bgaag olno
	e=a*c;
	if(d%e==0) 
		f=d/e;
	else f=d/e+1;
	cout<<"Ortsnii too"<<f<<" ";
	if(d>e)
		{
			l=d-((f-1)*e); //32-2*20
			if (l==0){	
			l==e;}
		if(l%c==0)	
			m=l/c;
		else
			m=l/c+1;
		if (l%c==0)
					n=c;
			else
				n=d%c;
			
		}
	else {
		if (d%c==0)
				m=d/c;
			else
				m=d/c+1;
		if (d%c==0)
				n=c;
			else
				n=d%c;
		}
		
	cout<<"Davhriin too:"<<m<<" ";
	cout<<"Haalganii too:"<<n<<" ";
		
}


/*	a-davhar
	b-orts
	c-haalga
	d-haalganii toot
	e-a*c buyu 1 ortsond niit heden ail bgaa 20 ail
	f-ortsnii too
	k-
*/
