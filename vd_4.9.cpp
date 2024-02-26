#include<stdio.h>
#include<math.h>

int n=5;
float S(int k,int n){
	if(k==n) return sqrt(n);
	else return sqrt(k+S(k+1,n));
}
int main(){
	printf("S = %.2f",S(1,n));
	return 0;
}
