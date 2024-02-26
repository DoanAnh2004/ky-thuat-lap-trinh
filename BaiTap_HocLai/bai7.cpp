#include<stdio.h>

float S(float n){
	if(n==1) return 0.5;
	else return n/(n+1) + S(n-1);
}

int main(){
	float n;
	printf("Nhap n:");
	scanf("%f",&n);
	printf("S(%.2f) = %.2f",n,S(n));
	return 0;
}
