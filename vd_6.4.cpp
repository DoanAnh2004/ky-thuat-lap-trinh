#include<stdio.h>
#include<conio.h>
#include<math.h>

int cv[]={2,5,8,1,5,1};
int N=sizeof(cv)/sizeof(cv[0]);
int M=3;
int cs[100];



int gtm[100];
int cvm[100];
int tm[100];
int Tmax=cv[0];

int main()
{
	int i,j,tam,k,l;
	for(i=0;i<N;i++)
	cs[i]=i;
	
	//giu ten cho may
	for(i=0;i<M;i++)
	gtm[i]=i;
	
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(cv[cs[i]]<cv[cs[j]])
			{
				tam=cs[i];	
				cs[i]=cs[j];
				cs[j]=tam;		
			}
	Tmax=cv[cs[0]];
	
	for(i=0;i<M;i++)
	{
		cvm[cs[i]]=i;
		tm[i]=cv[cs[i]];
	}
	
	i=M;
	while(i<N)
	{
		for(k=0;k<M-1;k++)
		for(l=k+1;l<M;l++)
			if(tm[gtm[k]]>tm[gtm[l]])
			{
				tam=gtm[k];
				gtm[k]=gtm[l];
				gtm[l]=tam;	
			}
	}
	for(k=0;k<M;k++)
		if(tm[gtm[k]]<Tmax)
			if(i<N){
				tm[gtm[k]]=tm[gtm[k]]+cv[cs[i]];
				cvm[cs[i]]=gtm[k];
				i=i+1;			
			}
		else break;
		
		for(k=0;k<M;k++)
			if(Tmax<tm[k]) Tmax=tm[k];
			
	for(j=0;j<M;j++)
	{
		printf("\n May %d: \n",j+1);
		for(k=0;k<N;k++)
			if(cvm[cs[k]]==j) printf("%3d",cs[k]+1);
	}
	getch();
	return 0;		
}
