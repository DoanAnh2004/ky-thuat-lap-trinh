#include<stdio.h>
int w[]={2,3,5,1,7,9,5,6,5,8};
int v[]={20,7,10,5,25,35,15,23,18,28};
int n=sizeof(w)/sizeof(w[0]);
int X=31;
int s=0;
int t=0;
int l[20];
int tt[20];
void xet_kq()
{
	int wt=0;int vt=0;
	for(int k=0;k<=n;k++)
		if(tt[k]==1) {wt=wt+w[k],vt=vt+v[k];}
			if(wt<=X)
				if(vt>s)
				{
					s=vt;t=wt;
					for(int k=0;k<=n;k++)
						l[k]=tt[k];
				}
}
void in_nghiem()
{
	if(s>0)
		for(int k=0;k<=n;k++)
			if(l[k]==1) printf("\n vat thu: %d, the tich: %d, gia tri: %d \n",k,w[k],v[k]);
			printf("Tong the tich: %d, Tong gia tri: %d",t,s);
}
void thu(int i)
{
	int j;
	for(j=0;j<=n;j++)
	{
		tt[i]=j;
		if(i<n-2) thu(i+1);
		xet_kq();
		tt[i]=0;
	}
}
int main()
{
	thu(0);
	in_nghiem();
	return 0;
}
