#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	int n=0, dau=-1;
	float sp=0, temp=1.0/(2*n+1);
	while(temp>=0.000001){
		temp=1.0/(2*n+1);
		sp+=-1*dau*temp;
		dau*=-1;
		n++;
	}
	float PI=4*sp;
	cout<<"Gia tri gan dung cua so PI voi sai so 1/1000000="<<setprecision(6)<<PI;
	getch();
}
