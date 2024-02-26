#include<stdio.h>

int a[]={5,12,56,32,17,5,68,93,31,14};
int n=sizeof(a)/sizeof(a[0])-1;
//-------------------------------
int min(int x, int y)
{
	if(x<=y) return x;
	else return y;
}
//-------------------------------
int SNN(int n)
{
	if(n==0) return a[0];
	else 
		if(n==1) return min(a[0],a[1]);
	else
		return min(a[n],SNN(n-1));
}
//-------------------------------
int main()
{
	printf("\n so nho nhat la: %d",SNN(n));
	return 0;
}
