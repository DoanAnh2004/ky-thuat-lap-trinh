#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int sochia, sobichia, thuong, du;
	cout<<"Nhap so bi chia:"; cin>>sobichia;
	cout<<"Nhap so chia luon < sobichia:"; cin>>sochia;
	thuong=0;
	while(sochia<=sobichia){
		sobichia=sobichia-sochia;
		thuong=thuong+1;
	}
	du=sobichia;
	cout<<"Thuong="<<thuong<<endl;
	cout<<"So du="<<du;
	getch();
}
