#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float ex, t, x; int n;
	cout<<"Nhap x:"; cin>>x;
	ex=1; n=1; t=x;
	while(t>0.000001){
		ex=ex+t;
		n=n+1;
		t=t*(x/n);
	}
	cout<<"Gia tri ham e mu x = "<<ex;
	getch();
}
