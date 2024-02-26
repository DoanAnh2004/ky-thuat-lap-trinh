#include<stdio.h>

void TOH(int n, char x, char y, char z){
	if(n>0){
		TOH(n-1,x,y,z);
		printf("\n%c -> %c",x,y);
		TOH(n-1,z,y,x);
	}
}

int main()
{
	int n;
	printf("Nhap so dia: ");
	scanf("%d",&n);
	
	TOH(n-1,'A','B','C');
	return 0;
}
