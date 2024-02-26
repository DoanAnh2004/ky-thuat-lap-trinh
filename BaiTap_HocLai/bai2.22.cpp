#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i=1, n, tgsoi=26, soicon;
	while(soicon!=1){
		cout<<"\n Lan boc thu "<<i<<":";
		cout<<"\n Ban boc may vien:"; cin>>n;
		cout<<"\n May tinh boc:"<<5-n;
		cout<<"\n Tong soi con lai sau lan boc thu "<<i<<":"<<tgsoi-(5*i);
		soicon=tgsoi-5*i;
		i=i+1;
	}
	cout<<"\n Ban phai boc vien cuoi cung. Ban thua roi!";
	getch();
}
