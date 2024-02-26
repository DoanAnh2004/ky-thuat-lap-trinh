#include<stdio.h>
int a[10],b[10];

int main(){
	int a[]={7,9,1,5,34,-1,6,5,89};
	int b[]={4,9,13,8,5,4};
	int m=sizeof(a)/sizeof(a[0]);
	int l=sizeof(b)/sizeof(b[0]);
	b[1]=-1;
	
	int dem1=0;
	int dem2=0;
	
	int i=0;
	while((a[i]>-1) && (i<m)){
		dem1=dem1+1;
		i=i+1;
	}
	printf("So phan tu dau day a co gia tri >-1: %d",dem1);
	
	int j=0;
	while(b[j]>-1){
		dem2=dem2+1;
		j=j+1;
	}
	printf("\nSo phan tu dau day b co gia tri >-1: %d",dem2);
	return 0;
}
