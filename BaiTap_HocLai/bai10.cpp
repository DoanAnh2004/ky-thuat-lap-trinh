#include<stdio.h>
#include<math.h>

int main(){
	int x;
	int n;
	printf("Nhap x:");
	scanf("%d",&x);
	printf("Nhap n:");
	scanf("%d",&n);
	long T = pow(x,n);
	printf("T(%d,%d) = %li",x,n,T);
	return 0;
}
