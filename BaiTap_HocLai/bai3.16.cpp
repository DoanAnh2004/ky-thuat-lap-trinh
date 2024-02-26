#include<iostream>
#include<conio.h>
using namespace std;
long int gtdq(int n){
	if(n==1|n==0) return 1;
	else return (n*gtdq(n-1));
}
int main(){
	int n;
	cout<<"\n Nhap n:"; cin>>n;
	cout<<n<<"!="<<gtdq(n);
	getch();
}
