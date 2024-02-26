#include<stdio.h>
#include<math.h>

int n=5;
float S(int n){
	if(n==0) return 0;
	else return sqrt(2+S(n-1));
}
int main(){
	printf("S = %.2f",S(n));
	return 0;
}
