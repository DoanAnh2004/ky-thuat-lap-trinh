#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int ktSoHoanhao(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return 1;
	}
	return 0;
}
int main(){
	int n, kiemTra;
	cout<<"Nhap vao so nguyen duong n = "; cin>>n;
	kiemTra = ktSoHoanhao(n);
	if(kiemTra==1){
		cout<<n<<" la so hoan hao.\n";
	}else{
		cout<<n<<" khong phai la so hoan hao.";
	}
	getch();
}
