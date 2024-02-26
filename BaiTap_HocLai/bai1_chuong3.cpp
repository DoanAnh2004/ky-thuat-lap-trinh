#include<iostream>
using namespace std;
int n;

void nhap(){
	cout<<"Nhap n:"; cin>>n;
}

float tongQ(){
	float Q = 0;
	for(float i=1; i<=n; i++){
		Q = Q + i/(i+1);
	}
	return Q;
}

int main(){
	nhap();
	cout<<"Q = "<<tongQ();
	return 0;
}
