#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int chon;
	do{
		cout<<"1/ Ca om dua."<<endl;
		cout<<"2/ Chim bo cau quay."<<endl;
		cout<<"3/ Tom hum."<<endl;
		cout<<"4/ Muc ong nhoi thit chien."<<endl;
		cout<<"Lua chon cua ban (khong chon go 0 hoac 5 de thoat):"<<endl;
		cin>>chon;
		cout<<endl;
		cout<<"Ban vua chon muc so:"<<chon<<endl;
	}while(chon>=1 && chon<=4);
	cout<<endl;
}
