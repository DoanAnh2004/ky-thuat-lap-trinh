#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int so_ngaycong;
	float hesonhan;
	float luong;
	float thuong;
	cout<<"Nhap binh quan so ngay cong trong nam:";
	cin>>so_ngaycong;
	cout<<"Nhap he so nhan:";
	cin>>hesonhan;
	cout<<"Nhap luong:";
	cin>>luong;
	if(so_ngaycong>=290){
		thuong = hesonhan * luong;
	}
	else thuong = 0;
	cout<<"Thuong cuoi nam cua cong nhan la:"<<thuong<<endl;
	getch();
}
