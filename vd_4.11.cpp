#include<stdio.h>
#include<math.h>

int a[]={15,25,10,56,72,43,70,18,20,25};
int kt=sizeof(a)/sizeof(a[0]);

int S(int a[],int n){
	if(n<0) return 0;
	else if(a[n]%2==0) return a[n]+S(a,n-1);
	else return S(a,n-1);
}

int main(){
	printf("Ket qua: %d",S(a,kt-1));
	return 0;
}
