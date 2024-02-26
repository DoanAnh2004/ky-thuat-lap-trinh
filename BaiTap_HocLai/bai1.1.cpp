#include<iostream>
using namespace std;
#include<conio.h>
// y = x << n; <==> y = x * 2^n;
// y = x >> n; <==> y = x / 2^n;
int main(){
	int x=23, y;
	y = x << 1; cout<<"Dich trai "<<x<<" di 1 bit="<<y; // y = 46;
	cout<<"; Tuong duong voi 23*2^1=23*2=46"<<endl;
	y = x << 2; cout<<"Dich trai "<<x<<" di 2 bit="<<y; // y = 92;
	cout<<"; Tuong duong voi 23*2^2=23*4=92"<<endl;
	cout<<"= = = = = = = = = = = = = = = = = = = = = = = ="<<endl;
	y = x >> 1; cout<<"Dich phai "<<x<<" di 1 bit="<<y; // y = 11;
	cout<<"; Tuong duong voi 23/2^1=23/2=11"<<endl;
	y = x >> 2; cout<<"Dich phai "<<x<<" di 2 bit="<<y; // y = 5
	cout<<"; Tuong duong voi 23/2^2=23/4=5"<<endl;
	cout<<" (Nho: Toan tu / tren day la phep chia lay phan nguyen!)";
	getch();
}
