#include<stdio.h>

int fibonacci(int n)
{
	if(n<0){
		return -1;
	} else if(n==0||n==1){
		return n;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int i;
	printf("30 so dau tien cua day Fibonacci: \n");
	for(int i=0;i<30;i++){
		printf("%d ",fibonacci(i));
	}
}
