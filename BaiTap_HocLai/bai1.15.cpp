#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float a, b, c;
	cout<<"Nhap a,b,c:";cin>>a>>b>>c;
	if((a+b>c)||(b+c>a)||(a+c>b)){
		cout<<"a, b, c tao thanh 3 canh tam giac"<<endl;
		if(a==b==c) cout<<"a, b, c tao thanh 3 canh tam giac deu";
		else if(a==b||b==c||a==c) cout<<"a, b, c tao thanh 3 canh tam giac can";
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) cout<<"a, b, c tao thanh 3 canh tam giac vuong";
	}else cout<<"a, b, c khong tao thanh 3 canh tam giac";
	getch();
}
