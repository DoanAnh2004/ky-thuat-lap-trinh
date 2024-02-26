#include<iostream>
#include<math.h>
using namespace std;
int n;

void nhap(){
	cout<<"Nhap n:"; cin>>n;
}
float tinhtong(){
	float T = 0;
	for(int i=n;i>=1;i--){
		T = sqrt(pow(2,i)+T);
	}
	return T;
}
int main(){
	nhap();
	cout<<"T = "<<tinhtong();
	return 0;
}
