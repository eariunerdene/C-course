#include <iostream>
using namespace std;
int runProgram();
void pat1(int);
void pat2(int);
void pat3(int);
void pat4(int);
void pat5(int);
void pat6(int);
void pat7(int);
void pat8(int);
void pat9(int);
void pat10(int);

int main(){
	runProgram();
	return 0;
}

int runProgram(){
	int s;
	int n;
	cout<<"Please insert the number of pattern that you want to see: ";
	cin>>n;
	if(n==1){
		cout<<"Enter your size: ";
		cin>>s;
		pat1(s);
	}
	if(n==2){
		cout<<"Enter your size: ";
		cin>>s;
		pat2(s);
	}
	if(n==3){
		cout<<"Enter your size: ";
		cin>>s;
		pat3(s);
	}
	if(n==4){
		cout<<"Enter your size: ";
		cin>>s;
		pat4(s);
	}
	if(n==5){
		cout<<"Enter your size: ";
		cin>>s;
		pat5(s);
	}
	if(n==6){
		cout<<"Enter your size: ";
		cin>>s;
		pat6(s);
	}
	if(n==7){
		cout<<"Enter your size: ";
		cin>>s;
		pat7(s);
	}
	if(n==8){
		cout<<"Enter your size: ";
		cin>>s;
		pat8(s);
	}
	if(n==9){
		cout<<"Enter your size: ";
		cin>>s;
		pat9(s);
	}
	if(n==10){
		cout<<"Enter your size: ";
		cin>>s;
		pat10(s);
	}
}

void pat1(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			cout<<"1 ";
		}
	cout<<endl;
	}
}
void pat2(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if(i%2==0){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat3(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if(j%2!=0){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat4(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if(i==0||i==s-1||j==0||j==s-1){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat5(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if((s-1)/2==j && (s-1)/2==i){
			cout<<"0 ";
			}
			else
			cout<<"1 ";
		}
	cout<<endl;
	}
}
void pat6(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if((j+i)%2==0){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat7(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if((s-1)/2==j || (s-1)/2==i){
			cout<<"0 ";
			}
			else
			cout<<"1 ";
		}
	cout<<endl;
	}
}
void pat8(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if(j==i || j==s-i-1){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat9(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if((i==0&&j>0&&j!=s-1)||(i==s-1&&j>0&&j!=s-1)||(j==0&&i>0&&i!=s-1)||(j==s-1&&i>0&&i!=s-1)){
			cout<<"1 ";
			}
			else
			cout<<"0 ";
		}
	cout<<endl;
	}
}
void pat10(int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			cout<<i<<" ";
		}
	cout<<endl;
	}
}
