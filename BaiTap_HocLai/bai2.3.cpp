#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int i, bp;
	float can;
	cout<<"BINH PHUONG VA CAN BAC HAI CUA 19 SO TU NHIEN DAU TIEN:\n";
	cout<<" Cac so tu nhien	Binh phuong   Can bac hai"<<endl;
	for(i=2;i<=19;i++){
		bp=i*i;
		can=sqrt(i);
		cout<<"\t"<<i<<"\t\t"<<bp<<"\t  	"<<can<<endl;
	}
	getch();
}
