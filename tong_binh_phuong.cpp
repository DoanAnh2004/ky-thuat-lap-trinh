#include<stdio.h>
#include<math.h>

int Tong(int n)
{
	if(n==1) return 1;
	else return n*n + Tong(n-1);
}

int main(){
	printf("%d",Tong(5));
	return 0;
}
