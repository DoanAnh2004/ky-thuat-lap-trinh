#include<stdio.h>

float S(int n){
	if(n==1) return 1;
	else return 1.0/n + S(n-1);
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("S(%d) = %.1f",n,S(n));
}
