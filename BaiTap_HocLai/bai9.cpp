#include<stdio.h>

long T(int n){
	if(n==1) return 1;
	else return n*(T(n-1));
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("T(%d) = %li",n,T(n));
	return 0;
}
