#include<stdio.h>
#include<math.h>

int main(){
	int x;
	int n;
	printf("Nhap x:");
	scanf("%d",&x);
	printf("Nhap n:");
	scanf("%d",&n);
	long s = 0;
	for(int i=1;i<=n;i=i+2){
		s = s + pow(x,i);
	}
	printf("S(%d) = %li",n,s);
	return 0;
}
