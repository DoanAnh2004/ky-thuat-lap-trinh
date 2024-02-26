#include<stdio.h>
#include<math.h>

float caub(float n){
	if(n==1) return 1.0;
	else return 1.0/n + caub(n-1);
}

float cauc(int n){
	if(n==1) return 1.0;
	if(n%2==0) n=n-1;
	else return 1.0/(n) + cauc(2*n-1);
}

float caud(int n){
	if(n==1) return 1.0/2;
	return 1.0/(n*(n+1)) + caud(n-1);
}

int caue(int n, int x){
	if(n==1) return 1;
	else return pow(x,n) + caue(n-1,x);
}

int main(){
	printf("%.2f",caub(5));
	printf("\n%.2f",cauc(3));
	printf("\n%.2f",caud(2));
	printf("\n%d",caue(3,2));
	return 0;
}
