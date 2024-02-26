#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float thunhap, thue;
	cout<<"Thu nhap binh quan hang thang cua ban:";
	cin>>thunhap;
	if(thunhap<=10000000) thue=0;
	else if(thunhap>=11000000 && thunhap<16000000) thue=0.005*thunhap;
	else if(thunhap>=16000000 && thunhap<21000000) thue=0.01*thunhap;
	else if(thunhap>=21000000 && thunhap<25000000) thue=0.015*thunhap;
	else if(thunhap>=25000000 && thunhap<30000000) thue=0.02*thunhap;
	else if(thunhap>=30000000 && thunhap<35000000) thue=0.025*thunhap;
	else if(thunhap>=35000000 && thunhap<40000000) thue=0.03*thunhap;
	else thue=0.045*thunhap;
	cout<<"Thue thu nhap ban phai dong hang thang="<<thue;
	getch();
}
