#include<iostream>
#include<conio.h>
using namespace std;
long gt(int k){
	int tic=1, i;
	if(k==0 ||k==1) return 1;
	else{
		for(i=1;i<=k;i++){
			tic*=i;
		}
		return tic;
	}
}
int main(){
	int n;
	cout<<"\n Nhap so n:";
	cin>>n;
	cout<<n<<"!="<<gt(n);
	getch();
}
