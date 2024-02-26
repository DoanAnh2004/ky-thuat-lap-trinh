#include<stdio.h>
int sd=3;
int sc=5;
int a[3][5] =
{ 15,12,8,9,13,
 6,8,7,9,21,
 5,4,12,18,50};
FILE *f;
int main()
{
	f=fopen("D:\\ky thuat lap trinh\\Documents\\MATRAN.txt","w+");
	if(f==NULL)
		printf("Mo file khong thanh cong");
	else
	{
		fprintf(f,"%2d \n",sd);
		fprintf(f,"%2d \n",sc);
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<5;j++)
			fprintf(f,"%3d",a[i][j]);
			fprintf(f,"\n");
		}
		fclose(f);
	}
	return 0;
}
