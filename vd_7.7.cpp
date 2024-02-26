#include<stdio.h>

int a[]={0,15,10,18,20,7,18,30,51};
int b[]={0,12,10,20,18,30,51};
int m=sizeof(a)/sizeof(a[0])-1;
int n=sizeof(b)/sizeof(b[0])-1;

int L[100][100];
void daychung(int a[], int b[], int m ,int n){
	int i,j;
	for(i=0;i<=m;i++)
		L[i][0]=0;
	for(j=0;j<=n;j++)
		L[0][j]=0;
	
	
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
		if(a[i]==b[j]) L[i][j]=L[i-1][j-1]+1;
		else
			if(L[i-1][j]>L[i][j-1]) L[i][j]=L[i-1][j];
			else L[i][j]=L[i-1][j];
	
	printf("\n Chieu dai day con chung: %d",L[m][n]);
	printf("\n Day con chung: \n");
		i=m; j=n;
		while(i>0){
			if(a[i]==b[j]){
				printf("%3d",a[i]); i=i-1; j=j-1;
			}
			else 
				if(L[i-1][j]>L[i][j-1]) i=i-1; else j=j-1;
		}
}
int main(){
	daychung(a,b,m,n);
	return 0;
}
