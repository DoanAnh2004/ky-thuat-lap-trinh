#include<stdio.h>

int tong(int n){
	if(n==1) return 1;
	else return n + tong(n-1);
}
float S(int n){
	float s = 0;
	for(int i=1;i<=n;i++){
		s = s + 1.0/(tong(i));
	}
	return s;
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("S(%d) = %.2f",n,S(n));
	return 0;
}
