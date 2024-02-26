#include<iostream>
using namespace std;
int n;

void nhap(){
	cout<<"Nhap n:"; cin>>n;
}

int tong(){
	int s;
	for(int i=1;i<=n;i++){
		s = s + i;
	}
	return s;
}

int main(){
	nhap();
	cout<<"s="<<tong();
	return 0;
}
