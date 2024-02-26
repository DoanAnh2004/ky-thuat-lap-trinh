#include<stdio.h>

float S(int n){
	if(n==1) return 0.5;
	else return 1.0/(2*n) + S(n-1);
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("S(%d) = %.2f",n,S(n));
	return 0;
}
