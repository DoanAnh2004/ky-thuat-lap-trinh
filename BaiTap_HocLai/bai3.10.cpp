#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int uscln(int a, int b){
	while(a!=0 && b!=0){
		if(a>b) a-=b; else b-=a;
	}
	if(a==0) return b;
		else return a;
}
int bscnn(int a, int b){
	return a*b/uscln(a,b);
}
typedef struct taophanso{
	int ts, ms;
}
phanso;
phanso gianuoc(phanso a){
	phanso c; c.ts=a.ts/uscln(a.ts,a.ms);
	c.ms=a.ms/uscln(a.ts,a.ms);
	return c;
}
phanso cong(phanso a, phanso b){
	phanso c; c.ts=a.ts*b.ms+a.ms*b.ts;
	c.ms=a.ms*b.ms;
	c=gianuoc(c);
	return c;
}
void xuat(phanso a){
	cout<<a.ts<<"/"<<a.ms;
}
int main(){
	phanso a, b, c;
	cout<<"\n Nhap vao tu va mau cua phan so a:"; cin>>a.ts>>a.ms;
	cout<<"\n Nhap vao tu va mau cua phan so b:"; cin>>b.ts>>b.ms;
	cout<<"\n Gian uoc ph_so a:"; a=gianuoc(a); xuat(a);
	cout<<"\n Gian uoc ph_so b:"; b=gianuoc(b); xuat(b);
	cout<<"\n Tong cua hai phan so:"; c=cong(a,b); xuat(c);
	getch();
}
