#include<stdio.h>

float S(float n){
	if(n==0) return 0.5;
	else return (2*n+1)/(2*n+2) + S(n-1);
}

int main(){
	float n;
	printf("Nhap n:");
	scanf("%f",&n);
	printf("S(%.1f) = %.2f",n,S(n));
	return 0;
}
