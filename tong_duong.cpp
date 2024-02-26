#include<stdio.h>

int a[]={-4,4,5,-5,8,10,23,-7,34};
int n=sizeof(a)/sizeof(a[0]);

int tong(int a[], int n){
	if(n==0) return 0;
	else{
		int sum = tong(a,n-1);
		if(a[n-1]>0) sum+=a[n-1];
		return sum;
	}
}

int main(){
	printf("Ket qua: %d",tong(a,n));
	return 0;
}
