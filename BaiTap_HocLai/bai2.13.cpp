#include<iostream>
#include<conio.h>
#include<iomanip>
#define max 100
using namespace std;
int main(){
	int i, k2, k3, a2, a3, n, a[max];
	cout<<"Nhap so phan tu:"; cin>>n;
	k2=k3=0; a[0]=1;
	cout<<"Tap nua boi can tim:\n";
	cout<<"1";
	for(i=1;i<n;i++){
		a2=2*a[k2]+1; a3=3*a[k3]+1;
		if(a2<=a3){a[i]=a2; k2++;}
		if(a3<=a2){a[i]=a3; k3++;}
		cout<<setw(4)<<a[i];
	}
	getch();
}
