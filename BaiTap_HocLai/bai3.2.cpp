#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
float sohoc(float a, float b, char pt){
	float kq;
	switch(pt){
		case '+': kq=a+b; break;
		case '-': kq=a-b; break;
		case '*': kq=a*b; break;
		case '/': kq=a/b; break;
	}
	return kq;
}
int main(){
	float x, y; char pt;
	cout<<"Nhap 2 so thuc x, y:"; cin>>x>>y;
	cout<<"Nhap ky hieu phep tinh ban can:"; cin>>pt;
	cout<<"Ket qua phep tinh ban vua nhap:"<<sohoc(x,y,pt);
	getch();
}
