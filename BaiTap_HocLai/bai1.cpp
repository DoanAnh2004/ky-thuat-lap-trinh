#include<stdio.h>

int S(int n){
	if(n==1) return 1;
	else return n + S(n-1);
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("S(%d) = %d",n,S(n));
	return 0;
}
