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
	printf("\nCac uoc so < n:\n");
	for(k=1;k<n;k++){
		if(n%k==0){
			printf("%d ",k);
		}
	}
	int s = 0;
	for(k=1;k<n;k++){
		if(n%k==0){
			s = s + k;
		}
	}
	if(s == n){
		printf("\n So hoan thien \n");
	}
	else
	{
		printf("\n Khong la so hoan thien \n");
	}
	return 0;
}
