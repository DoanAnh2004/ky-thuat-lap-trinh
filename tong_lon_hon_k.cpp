#include<stdio.h>

int tong1(int a[], int n, float k){
	if(n==0) return 0;
	else{
		int sum = tong1(a,n-1,k);
		if(a[n-1]>k) sum+=a[n-1];
		return sum;
	}
}

int main(){
	int i,n;
	int a[20];
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap ptu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n%d",tong1(a,n,3));
	return 0;
}
