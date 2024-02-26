#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float dtb;
	cout<<"Nhap dtb:";
	cin>>dtb;
	if(dtb>=9 && dtb<=10) cout<<"Hoc luc Gioi";
	else if(dtb>=7 && dtb<9) cout<<"Hoc luc Kha";
	else if(dtb>=5 && dtb<7) cout<<"Hoc luc Trung binh";
	else if(dtb>=3 && dtb<5) cout<<"Hoc luc Kem";
	else cout<<"Hoc luc Yeu";
	getch();
}
