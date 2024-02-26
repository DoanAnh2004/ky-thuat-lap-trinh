#include<stdio.h>

long gt(int n){
	if(n==1) return 1;
	else return n*(gt(n-1));
}
long S(int n){
	long s = 0;
	for(int i=1;i<=n;i++){
		s = s + gt(i);
	}
	return s;
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("S(%d) = %li",n,S(n));
	return 0;
}
