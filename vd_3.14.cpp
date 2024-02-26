#include<stdio.h>
#include<string.h>

char path[100];
FILE *f;
int sd,sc;
int a[10][10];
//----------------------------
void docduongdan(char path[])
{
	printf("\n Nhap duong dan: ");
	gets(path);
}
//----------------------------
void docfile(char path[])
{
	int i,j;
	f=fopen(path,"r");
	if(f==NULL)
	printf("\n Mo file khong thanh cong!"); else
	{
		fscanf(f,"%d",&sd);
		fscanf(f,"%d",&sc);
		for(i=1;i<=sd;i++)
			for(j=1;j<=sc;j++)
			fscanf(f,"%d",&a[i][j]);
			fclose(f);
	}
}
//-----------------------------
void xmt()
{
	int i,j;
	for(i=1;i<=sd;i++)
	{
		printf("\n");
		for(j=1;j<=sc;j++)
			printf("%2d",a[i][j]);
	}
}
//------------------------------
int main()
{
	docduongdan(path);
	docfile(path);
	xmt();
	return 0;
}
