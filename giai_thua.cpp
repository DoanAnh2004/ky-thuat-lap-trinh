#include<stdio.h>

long giaithua(int n){
	if(n>0){
		return n*giaithua(n-1);
	} else {
		return 1;
	}
}

int main(){
	int a=11;
	int b=0;
	int c=10;
	printf("Giai thua cua %d la: %d\n",a,giaithua(a));
	printf("Giai thua cua %d la: %d\n",b,giaithua(b));
	printf("Giai thua cua %d la: %d",c,giaithua(c));
}
