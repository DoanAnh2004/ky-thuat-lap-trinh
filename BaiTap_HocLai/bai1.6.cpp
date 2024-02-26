#include<iostream>
#include<conio.h>
using namespace std;
// Giai bat phuong trinh ax + b > 0 (a!=0)
int main(){
	float a, b, x;
	cout<<"Nhap cac he so a,b:"; cin>>a>>b;
	if(a>0){
		cout<<"Nghiem bpt la: x > "<<-b/a;
	}
	else{
		cout<<"Nghiem bpt la: x < "<<-b/a;
	}
	getch();
}
