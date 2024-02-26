#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float x, s, t; int n;
	cout<<"Cho gia tri cua x (don vi radian):"; cin>>x;
	s=x; t=x; n=0;
	while(abs(t)>=0.000001){
		n=n+2;
		t=-t*(x*x)/(n*(n+1));
		s=s+t;
	}
	cout<<"sin(x)="<<ceil(s);
	getch();
}
