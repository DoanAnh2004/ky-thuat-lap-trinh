#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	int i, n; long tic;
	do{
		cout<<"Nhap n:"; cin>>n;
		i=2-n%2; tic=1;
		while(i<=n){
			tic=tic*i;
			i=i+2;
		}
		cout<<"\n";
		cout<<"Ket qua = "<<tic; cout<<"\n";
		cout<<" (Go n -> thoat, go y -> thu tiep!); More(y/n)?:";
	}while(getch()!='n');
}
