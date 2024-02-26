#include<stdio.h>

int UCLN(int a, int b){
	if(b==0) return a;
	return UCLN(b, a%b);
}

int BCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}

int main(){
	int a,b;
	printf("So nguyen duong a: ");
	scanf("%d",&a);
	printf("So nguyen duong b: ");
	scanf("%d",&b);
	printf("\nUCLN cua %d va %d: %d",a,b,UCLN(a,b));
	printf("\nBCNN cua %d va %d: %d",a,b,BCNN(a,b));
}
