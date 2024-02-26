#include<stdio.h>
#include<math.h>

int a[]={15,25,10,56,72,43,70,18,20,25};
int kt=sizeof(a)/sizeof(a[0]);

int max(int a, int b){
	if(a>b) return a;
	else return b;
}

int tonhat(int a[], int n){
	if(n==0) return a[0];
	else return max(a[n],tonhat(a,n-1));
}

int main(){
	printf("Phan tu lon nhat: %d",tonhat(a,kt-1));
	return 0;
}
