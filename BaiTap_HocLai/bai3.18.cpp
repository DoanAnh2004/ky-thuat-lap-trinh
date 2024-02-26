#include<iostream>
#include<conio.h>
using namespace std;
long f(long i){
	if(i==1||i==2) return 1;
	else return f(i-1)+f(i-2);
}
int main(){
	long n, i;
	cout<<"Nhap do dai cua day fibonacci:"; cin>>n;
	cout<<"Day fibonacci can tim voi do dai (khong in so 0)="<<n<<" la:"<<"\n\n";
	for(i=1;i<=n;i++){
		cout<<f(i)<<" ";
	}
	getch();
}
