#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, a=0, b=1, c=0;
	cout<<"Nhap so nguyen duong n:"; cin>>n;
	cout<<"DAY FIBONACCI CO DO DAI = "<<n+2<<endl;
	cout<<a;
	for(int i=0;i<=n;i++){
		a=b;
		b=c;
		c=a+b;
		cout<<" "<<c;
	}
	getch();
	return 0;
}
