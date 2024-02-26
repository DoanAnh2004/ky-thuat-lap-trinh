#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	long int so, dv, tg;
	cout<<"\n Nhap so nhieu hon 1 chu so:"; cin>>so;
	tg=0;
	while(so>0){
		dv=so%10;
		tg=dv+10*tg;
		so=so/10;
	}
	cout<<"So viet nguoc lai la:"<<tg;
	getch();
}
