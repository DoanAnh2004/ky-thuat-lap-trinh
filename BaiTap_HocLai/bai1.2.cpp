#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a, b, c, d;
	a=0 & 0;
	b=0 & 1;
	c=1 & 0;
	d=1 & 1;
	int a1, b1, c1, d1;
	a1=0 | 0;
	b1=0 | 1;
	c1=1 | 0;
	d1=1 | 1;
	int a2, b2, c2, d2;
	a2=0 ^ 0;
	b2=0 ^ 1;
	c2=1 ^ 0;
	d2=1 ^ 1;
	int a3, b3;
	a3= ~0;
	b3= ~1;
	cout<<"CAC TOAN TU LOGIC SO HOC:"<<endl;
	cout<<"0 & 0="<<a<<endl;
	cout<<"0 & 1="<<b<<endl;
	cout<<"1 & 0="<<c<<endl;
	cout<<"1 & 1="<<d<<endl;
	cout<<"\n";
	cout<<"0 | 0="<<a1<<endl;
	cout<<"0 | 1="<<b1<<endl;
	cout<<"1 | 0="<<c1<<endl;
	cout<<"1 | 1="<<d1<<endl;
	cout<<"\n";
	cout<<"0 ^ 0="<<a2<<endl;
	cout<<"0 ^ 1="<<b2<<endl;
	cout<<"1 ^ 0="<<c2<<endl;
	cout<<"1 ^ 1="<<d2<<endl;
	cout<<"\n";
	cout<<"~0="<<a3<<endl;
	cout<<"~1="<<b3<<endl;
	getch();
}
