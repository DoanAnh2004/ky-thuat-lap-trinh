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
	printf("\nCac uoc so le cua n:\n");
	for(k=1;k<=n;k++){
		if(n%k==0){
			if(k%2!=0){
				printf("%d ",k);
			}
		}
	}
	int m = 1;
	for(k=1;k<=n;k++){
		if(n%k==0){
			if(k%2!=0){
				m = m * k;
			}
		}
	}
	printf("\nTich cac uoc so le cua n = %d",m);
	return 0;
}
