#include<stdio.h>

int main(){
	int n;
	int k;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Cac uoc so cua n:\n");
	for(k=1;k<=n;k++){
		if(n%k==0){
			printf("%d ",k);
		}
	}
	int count = 0;
	for(k=1;k<=n;k++){
		if(n%k==0){
			count++;
		}
	}
	printf("\nSo luong uoc so cua n: %d",count);
	return 0;
}
