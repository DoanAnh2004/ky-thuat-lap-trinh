#include<stdio.h>

int a[]={1,1,1,0,0,0,0,0,0};
int n=sizeof(a)/sizeof(a[0]);
int fZero(int a[],int l,int r)
{
	int mid;
	if(a[n-1]==1) return -1;
	if(a[0]==0) return 0;
	if(l>r) return -1;
	else 
	{
		mid=(l+r)/2;
		if((a[mid]==0)&&(a[mid-1]==1)) return mid;
		if(a[mid-1]==0) return fZero(a,1,mid-1);
		if(a[mid]==1) return fZero(a,mid+1,r);	
	}
}
int main()
{
	printf("First Zero element: %d",fZero(a,0,n-1));
	if(fZero(a,0,n-1)==-1) printf("Number of Zero: 0");
	else printf("\nNumber of Zero: %d",n-fZero(a,0,n-1));
	return 0;
}
