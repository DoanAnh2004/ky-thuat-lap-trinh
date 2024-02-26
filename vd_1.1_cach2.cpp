#include<stdio.h>
long a(int n){
	int a=1; int b=1; int c;
	int i;
	for(i=1;i<=n-2;i++){
		c=a+b;
		a=b;b=c;
	}
	return c;
}
int main(){
	int n=5;
	printf("a(%d)=%d",n,a(n));
	return 0;
}
