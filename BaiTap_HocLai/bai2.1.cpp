#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char kytu, kytu2;
	cout<<"In xuoi:"<<endl;
	for(kytu='A';kytu='Z';kytu++){
		cout<<kytu;
	}
	cout<<"\n";
	cout<<"In nguoc:"<<endl;
	for(kytu2='Z';kytu2='A';kytu2--){
		cout<<kytu2;
	}
	getch();
}
