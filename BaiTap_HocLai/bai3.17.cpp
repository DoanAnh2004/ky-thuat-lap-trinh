#include<iostream>
#include<conio.h>
using namespace std;
int uscln(int x, int y){
	if(y!=0) return uscln(y,x%y);
	else return x;
}
int main(){
	int a, b;
	cout<<"Nhap 2 so nguyen duong:"; cin>>a>>b;
	cout<<"Uoc so chung lon nhat cua 2 so vua nhap la:"<<uscln(a,b);
	getch();
}
