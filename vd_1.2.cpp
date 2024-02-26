#include<stdio.h>
int D[50];

int a(int n){
	D[1]=1; D[2]=1; D[3]=2; D[4]=4;
	if(n<=4) return D[n];
	else{
		for(int i=4;i<=n;i++){
			D[i]=D[i-1]+D[i-3]+D[i-4];
		}
		return D[n];
	}
}
int main(){
	int n=6;
	printf("D(%d)=%d",n,a(n));
	return 0;
}
