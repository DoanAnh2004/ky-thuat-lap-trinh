#include<iostream>
#include<conio.h>
using namespace std;
unsigned long giaithua(int n){
	unsigned long ketqua=1; int i;
	for(i=2;i<=n;i++){
		ketqua*=i;
	}
	return ketqua;
}
unsigned long chinhhop(int k, int n){
	return giaithua(n)/giaithua(n-k);
}
int main(){
	int n, k;
	cout<<"\n Nhap gia tri cua n va k (k<n):";
	cin>>n>>k;
	cout<<"Chinh hop chap "<<k<<" cua "<<n<<"="<<chinhhop(k,n);
	getch();
}
