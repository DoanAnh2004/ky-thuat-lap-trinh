#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, bit, i, khoitri=0; int numOfBit=sizeof(n)*8;
	cout<<"Nhap so nguyen duong n o he thap phan:";
	cin>>n;
	cout<<"So "<<n<<" vua nhap doi sang he nhi phan la:";
	for(i=numOfBit-1;i>=0;--i){
		bit=(n>>i)&0x01;
		if(khoitri==1){
			cout<<bit;
		}
		else{
			if(bit==1){
				khoitri=1;
				cout<<bit;
			}
		}
	}
	getch();
}
