#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n, bp; float can;
	do{
		cout<<"Nhap n:"; cin>>n;
		bp=n*n;
		can=sqrt(n);
		cout<<"Binh phuong cua "<<n<<" ="<<bp<<endl;
		cout<<"Can bac hai cua "<<n<<" ="<<can<<endl;
		cout<<"= = = = = = = = = = = = "<<endl;
		cout<<"Come on (c/k)?"<<endl;
	}while(getch()!='k');
}
