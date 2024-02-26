#include<stdio.h>
long a(int n){
	int i; long F[n+1];
	F[0]=0; F[1]=1;
	for(i=2;i<=n;i++){
		F[i] = F[i-1] + F[i-2];
		return F[n];
	}
}
int main(){
	int n=5;
	printf("a(%d)=%d",n,a(n));
	return 0;
}
