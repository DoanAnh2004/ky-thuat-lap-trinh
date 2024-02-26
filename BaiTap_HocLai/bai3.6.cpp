#include<iostream>
#include<conio.h>
using namespace std;
int ktra(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0) return 0;
		return 1;
	}
}
int main(){
	int n;
	cout<<"Nhap so nguyen duong n:"; cin>>n;
	if(ktra(n)==1) cout<<n<<" la so nguyen to";
	else cout<<n<<" khong la so nguyen to";
	cout<<"\n";
	getch();
}
