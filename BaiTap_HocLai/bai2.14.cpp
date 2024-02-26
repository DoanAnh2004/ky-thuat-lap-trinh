#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(){
	int *a, k, m, n, t, direc, swapdirec;
	cout<<" Nhap so hang cua bang m = "; cin>>m;
	cout<<" Nhap so cot cua bang n = "; cin>>n;
	a = (int*)calloc(m*n,sizeof(int));
	for(k=0; k<m*n;k++){
		a[k]=0;
		a[0]=1;
		direc=1;
		k=0;
	}
	for(t=2;t<=m*n;t++){
		swapdirec=0;
		if(k==n-1||k==m*n-1||k==m*n-n&&k>0) swapdirec=1;
		else if(a[k+direc]) swapdirec=1;
		if(swapdirec){
			if(direc==1||direc==-1) direc*=n;
			else direc/=-n;
		}
		k+=direc;
		a[k]=t;
	}
	cout<<"\n\n";
	puts("BANG CAC SO XOAN OC THEO CHIEU KIM DONG HO:\n\n");
	for(k=0;k<m*n;k++){
		cout<<setw(4)<<a[k];
		if(k%n==n-1) puts(" ");
	}
	getch();
}
