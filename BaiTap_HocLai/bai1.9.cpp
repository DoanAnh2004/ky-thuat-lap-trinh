#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float a, b, c, d, x1, x2;
	cout<<"Nhap cac he so a, b, c:"; cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0){
		cout<<"Phuong trinh bac 2 co nghiem kep: x1=x2="<<-b/(2*a);
	}
	else if(d>0){
		cout<<"Phuong trinh bac 2 co 2 nghiem phan biet:"<<endl;
		cout<<"x1="<<(-b+sqrt(d))/(2*a);
		cout<<" va x2="<<(-b-sqrt(d))/(2*a);
	}
	else cout<<"Phuong trinh bac 2 vo nghiem.";
	getch();
}
