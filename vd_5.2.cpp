#include<stdio.h>
#include<conio.h>

int a=5;
int lt(int a, int n)
{
	if(n==1) return a;
	else 
	{
		int k=n/2;
		int t=lt(a,k);
		if(n%2==0) return t*t;
		else 
			return t*t*a;
	}
}
int main()
{
	int n=4;
	printf("%d",lt(a,n));
	getch();
	return 0;
}
