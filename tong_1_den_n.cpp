#include<stdio.h>

int tong(int n){
	int result;
	if(n==1){
		return 1;
	} else {
		result = n + tong(n-1);
	}
	return result;
}

int main(){
	int result;
	int i,n;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	result = tong(n);
	printf("\nTong cac so tu 1 den %d: %d",n,result);
	
	return 0;
}
