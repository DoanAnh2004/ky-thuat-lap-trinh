#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int month, year, so_ng;
	do{
		cout<<"\n Cho biet nam co 4 chu so:";
		cin>>year;
		cout<<"\n Cho biet thang can tinh so ngay:";
		cin>>month;
		switch(month){
			case 4:
			case 6:
			case 9:
			case 11: so_ng=30; break;
			case 2: if(year%4==0){
				so_ng=29;
			} else so_ng=28;
				break;
			default: so_ng=31;
			break;
		}
		cout<<"Thang "<<month<<" cua nam "<<year<<" co so ngay="<<so_ng;
		cout<<"\n";
		cout<<"\n Come On (c/k)?:";
	}while(getch()!='k'); // Thoat ra nho go k
}
