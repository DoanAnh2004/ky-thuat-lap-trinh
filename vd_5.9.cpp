#include<stdio.h>

int n=7;
int a[]={10,9,3,4,1,2,8};

int ptln(int a[],int l, int r)
{
	int pln=a[l];
	for(int i=l;i<=r;i++)
		if(a[i]>pln) pln=a[i];
	return pln;
}

int vtln(int a[], int l, int r)
{
	int pln=a[l]; int k=l;
	for(int i=l;i<=r;i++)
		if(a[i]>pln) {pln=a[i];k=i;
		}
	return k;
}

int vt1(int a[], int l, int r)
{
	for(int i=l;i<=r;i++) if(a[i]==l) return i;
	return -1;
}

int kthv(int a[], int l, int r)
{
	if(vt1(a,l,r)==-1) return 0;
	else 
	{
		int M=ptln(a,l,r);
		int K=0;
		for(int i=l;i<=r;i++) K=K+a[i];	
			if(K==M*(M+1)/2) return 1;
			else return 0;
	}
}

void timhoanvi(int a[], int l, int r)
{
	if(vt1(a,l,r)==-1) printf("\n Khong co day con hoan vi!");
	else 
		if(kthv(a,l,r)==1) 
		{
			int M=ptln(a,l,r);
			printf("\n Chieu dai day hoan vi: %d",M);
			printf("\n Tu vi tri: %d den vi tri: %d",l,r);
		}
	else 
	{
		int Mi=vtln(a,l,r);
		if(vt1(a,l,r)>Mi) timhoanvi(a,Mi+1,r);
		else timhoanvi(a,l,Mi-1);	
	}
}
//--------------------------------------------------------
int main()
{
	timhoanvi(a,0,n-1);
	return 0;
}
