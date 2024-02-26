#include<stdio.h>
#include<conio.h>
#define MAX 100
int a[MAX];
int b[MAX];
int n;
//-----------------------
void nhapdl(){
	int j;
	printf("Nhap so luong qua can: ");
	scanf("%d",&n);
	printf("\n Khoi luong cac qua can: \n");
	for(j=1;j<=n;j++){
		printf("a[%d]=",j);
		scanf("%d",&a[j]);
	}
}
//------------------------
void inketqua()
{
	int s1=0;
	int s2=0;
	int j;
	for(j=1;j<=n;j++)
	{
		if(b[j]==-1) s1=s1+a[j];
		if(b[j]==1) s2=s2+a[j];
	}
	if((s1==s2)&&(s1!=0))
	{
		printf("\n --------------- \n");
		printf("\n Dia trai: \n");
		for(j=1;j<=n;j++)
		{
			if(b[j]==-1) printf("%2d",a[j]);
		}
		// in dia phai
		printf("\n Dia phai: \n");
		for(j=1;j<=n;j++)
		{
		if(b[j]==1) printf("%2d",a[j]);
		}
		printf("\n --------------- \n");
	}
}
//----------------------------
void thu(int i)
{
	int j;
	for(j=-1;j<=-1;j++)
	{
		b[i]=j;
		if(i<n) thu(i+1);
		else 
		inketqua();
		b[i]=0;
	}
}
int main(){
	nhapdl();
	thu(1);
	getch();
	return 0;
}
