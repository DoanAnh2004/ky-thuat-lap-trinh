#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int n, p, c, k, count = 0;
	cout<<"Nhap so nguyen duong thap phan:";
	cin>>n;
	p=n;
	while(p){
		p=p/10;
		count++;
	}
	cout<<" So nhi phan tuong ung dai 8 bit la: ";
	if(count==1){
		count=2;
		c=count*count*count-1;
	}
	for(c;c>=0;c--){
		k=n>>c;
		if(k&1) cout<<"1";
		else cout<<"0";
	}
	cout<<endl;
	getch();
}
