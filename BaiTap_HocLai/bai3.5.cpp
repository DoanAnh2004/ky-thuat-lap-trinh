#include<iostream>
#include<conio.h>
using namespace std;
long int hoanhao(int a){
	long int tongcac_uoc, i;
	for(tongcac_uoc=1, i=2; i<a; i++){
		if(a%i==0) tongcac_uoc+=i;
	}
	return (tongcac_uoc==a);
}
int main(){
	long int i, n;
	cout<<"\n Nhap n="; cin>>n;
	cout<<"CAC SO HOAN HAO < "<<n<<" : ";
	for(i=2;i<n;i++){
		if(hoanhao(i)) cout<<" \n"<<i;
	}
	getch();
}
