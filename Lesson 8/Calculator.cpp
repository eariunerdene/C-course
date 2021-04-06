#include <iostream>
using namespace std;

float sum(float, float);
float sub(float, float);
float multi(float, float);
float div(float, float);
int modulo(int, int);


int main (){
	float a,b,hariu;
	char uildel;
	cout<<"Ta 2 too oruulna uu"<<endl;
	cin>>a>>b;
	while(1){
		
		cout<<"Ta uildelee +,-,*,/,% uildluudees songono uu"<<endl;
		cin>>uildel;
		if (uildel == '+'){
			hariu=sum(a,b);
			cout<<hariu<<endl;
		} if (uildel == '-'){
			hariu=sub(a,b);
			cout<<hariu<<endl;
		} if (uildel == '*'){
			hariu=multi(a,b);
			cout<<hariu<<endl;
		} if (uildel == '/'){
			hariu=div(a,b);
			cout<<hariu<<endl;
		} if (uildel == '%'){
			hariu=modulo(a,b);
			cout<<hariu<<endl;
		} else
			cout<<"Buruu temdeg oruulsan bna"<<endl;
		
	}
	return 0;
}
	
float sum(float x, float y){
	return x+y;
}
float sub(float x, float y){
	return x-y;
}
float multi(float x, float y){
	return x*y;
}
float div(float x, float y){
	return x/y;
}
int modulo(int x, int y){
	return x%y;
}


/*Homework
Calculator bichne
5 oor function zohion
add,sub,multi,div,module->%
ene 5n fuction 2 too(double esve float) huleen avna
5 uulaa 1 too butsaana (return type);
-----------------main----------
main function dotor hereglegchees too 2 too asuuna;
daraa n 1 char asuuna
hervee ogogdson char '+' baival add() functioniig ajilluulaad yu butsaasan
teriig hevlej gargaj irne.
mon adil busad function adilhan uureg guitsetgene!
*/
