#include<stdio.h>

int caub(int n, int a[]){
	if(n==0) return 0;
	else {
		int sum = caub(n-1,a);
		if(a[n-1] > 0) sum+=a[n-1];
		return sum;
	}
}

int cauc(int n, int a[], float k){
	if(n==0) return 0;
	else {
		int sum = cauc(n-1,a,k);
		if(a[n-1] > k) sum+=a[n-1];
		return sum;
	}
}

int main(){
	int i,n;
	int a[20];
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n%d",caub(n,a));
	printf("\n%d",cauc(n,a,3));
	return 0;
}
