#include<stdio.h>
int A=150;
int n=6;
int a[]={50,20,20,20,20,20};

int flag[20];// danh dau cac dong tien tham gia cd
int P;// So tien con lai sau chuyen doi
void doi_tien()
{
	int i=0;
	while((P>0)&&(i<n))
	{
		if(P>=a[i])
		{
			flag[i]=1;
			P=P-a[i];
		}
		i=i+1;
	}
}
int main()
{
	P=A;
	doi_tien();
	if(P!=0) printf("\n Khong doi duoc tien! \n");
	else 
	{
		printf("\n Ket qua chuyen doi: \n");
		for(int j=0;j<n;j++)
			if(flag[j]==1) printf("\n %3d",a[j]);
	}
	return 0;
}
