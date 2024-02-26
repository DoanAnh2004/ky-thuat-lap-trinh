#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char hocluc = ' ';
	cin>>hocluc;
	switch(hocluc){
		case 'A': cout<<"Xep loai Gioi."<<endl;
		break;
		case 'B':
		case 'C': cout<<"Xep loai Kha."<<endl;
		break;
		case 'D': cout<<"Xep loai Trung binh."<<endl;
		break;
		case 'E': cout<<"Xep loai kem."<<endl;
		break;
		default: // Tuy chon (option)
		cout<<"Gia tri khong hop le."<<endl;
	}
	cout<<"Ma hoc luc cua ban la "<<hocluc<<endl;
	getch();
}
