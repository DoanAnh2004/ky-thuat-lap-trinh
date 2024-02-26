#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a, b, uscln;
	cout<<"Nhap 2 so nguyen duong a, b:";
	cin>>a>>b;
	while(a-b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	cout<<"Uscln="<<b;
	cout<<endl;
	getch();
}
