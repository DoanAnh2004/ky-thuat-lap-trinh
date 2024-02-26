#include<stdio.h>
int a,b,c;
int n;
//--------------------------------------
int fib(int n)
{
	int i;
	if(n<3) return 1;
	else 
	{
		a=1;b=1;
		for(i=1;i<=n-2;i++)
		{
			c=a+b;
			a=b; b=c;
		}
		return c;
	}
}
//---------------------------------------
int main()
{
	printf("\n Nhap n: "); scanf("%d", &n);
	printf("\n fibo(%d)=%d",n,fib(n));
	return 0;
}
