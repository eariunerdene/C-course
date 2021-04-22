#include <iostream>
using namespace std;
int main(){
	
	string studentName[50];
	int studentGrade[50];
	int num;
	cout<<"Tanai angi heden suragchtai ve?"<<endl;
	cin>>num;
	
	for(int i=1;i<=num;i++){
		cout<<i<<" dahi suragchiin ner: ";
		cin>>studentName[i];
		cout<<i<<" dahi suragchiin dun: ";
		cin>>studentGrade[i];
	}
	
	cout<<"Tanai angiin niit suragchdiin burtgel "<<endl;
	cout<<"Ner:"<<"\t"<<"Dun:"<<endl;
	cout<<"----------------- "<<endl;
	for(int i=1;i<=num;i++){
		cout<<studentName[i]<<"\t"<<studentGrade[i]<<endl;
	}
	
	
	
	return 0;
}
