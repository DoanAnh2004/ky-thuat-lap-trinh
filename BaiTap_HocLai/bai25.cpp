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
	printf("\nCac uoc so chan cua n:\n");
	for(k=1;k<=n;k++){
		if(n%k==0){
			if(k%2==0){
				printf("%d ",k);
			}
		}
	}
	int s = 0;
	for(k=1;k<=n;k++){
		if(n%k==0){
			if(k%2==0){
				s = s + k;
			}
		}
	}
	printf("\nTong cac uoc so chan cua n = %d",s);
	return 0;
}
