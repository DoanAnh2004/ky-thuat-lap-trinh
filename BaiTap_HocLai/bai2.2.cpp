#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, i;
	cout<<"\n Nhap so nguyen duong n:";cin>>n;
	cout<<"\n Cac uoc so cua "<<n<<" la:";
	for(i=1;i<=n;i++){
		if(n%i==0){
			cout<<" "<<i;
		}
	}
	getch();
}
