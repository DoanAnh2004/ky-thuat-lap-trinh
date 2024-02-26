#include<stdio.h>

#define SQUARE(x) x*x
int main(){
	int k=36/SQUARE(6);
	printf("%d",k);
	return 0;
}
