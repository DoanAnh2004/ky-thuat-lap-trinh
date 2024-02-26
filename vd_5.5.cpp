#include<stdio.h>

int a[]={1,2,3,2,4};
int n=sizeof(a)/sizeof(a[0]);
int x=2;
int count(int a[],int l, int r, int x)
{
	if(l==r){
		if(a[l]==x) return l;
		else return 0;
	} else {
		int m=(l+r)/2;
		return count(a,l,m,x) + count(a,m+1,r,x);
	}
}
int main()
{
	printf("\n So phan tu x = %d thuoc day: %d",x,count(a,0,n-1,x));
	return 0;
}
