#include<stdio.h>

int a=1;
int b=1;
int c;
int i,n;
int main(){
	printf("\n Nhap n: ");
	scanf("%d",&n);
	if(n<=2) printf("u(%d)=1",n);
	else {
		for(i=1;i<n-2;i++){
			c=a+b;
			a=b;
			b=c;
		}
		printf("u(%d)=%d",n,c);
	}
	return 0;
}
