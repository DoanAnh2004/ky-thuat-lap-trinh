#include<iostream>
#include<conio.h>
using namespace std;
int chp(int n){
	int i=1,d=0;
	while(i<n){
		i++;
		if(i*i==n) return 1;
	}
	return 0;
}
int main(){
	int n;
	cout<<"Nhap so nguyen duong n>1:"; cin>>n;
	if(chp(n)) cout<<n<<" la so chinh phuong";
	else cout<<n<<" khong la so chinh phuong";
	getch();
}
