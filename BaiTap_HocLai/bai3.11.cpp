#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
float tinhdathuc(float heso[], float x, int n){
	float tong=0.0; int i;
	{
		tong=tong+heso[i]*x;
	}
	tong+=heso[n];
	return tong;
}
int main(){
	float heso[MAX], x; int n, i;
	cout<<"\n Nhap vao bac cua da thuc:"; cin>>n;
	cout<<"\n Nhap vao cac he so cua da thuc a0, a1, ... an:";
	for(i=0;i<=n;i++){
		cin>>heso[i];
	}
	cout<<"\n Nhap vao gia tri cua x:"; cin>>x;
	cout<<"\n Gia tri cua da thuc la="<<tinhdathuc(heso,x,n);
	getch();
}
