#include<stdio.h>
long a(int n){
	if(n<=2) return 1;
	else return a(n-1) + a(n-2);
}
int main(){
	int n=5;
	printf("a(%d)=%d",n,a(n));
	return 0;
}
