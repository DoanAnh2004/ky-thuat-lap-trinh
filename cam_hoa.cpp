#include<stdio.h>
#define MININT -10000

int k=4;
int n=6;

int v[6][8]={{0,0,0,0,0,0,0,0},
			 {0,1,1,6,4,3,10,0},
			 {0,9,1,4,7,2,7,0},
			 {0,7,2,6,10,2,3,0},
			 {0,6,10,7,1,3,9,0},
			 {0,0,0,0,0,0,0,0}};
int L[100][100];

int main(){
	L[0][0]=0;
	for(int i=1;i<=k;i++){
		L[i][0]=0;
	}
	for(int j=1;j<=n;j++){
		L[0][j]=0;
	}
	
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				int s=0;
				for(int t=1;t<=i;t++){
					s=s+v[t][t];
					L[i][j]=s;
				}
			}
		}
		if(i>j) L[i][j]=MININT;
		if(i<j) if(L[i-1][j-1]+v[i][j]>=L[i][j-1])
					L[i][j]=L[i-1][j-1]+v[i][j];
				else L[i][j]=L[i][j-1];
	}
	int MAX=0; int bo; int lo;
	
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(L[i][j]>MAX){
				MAX=L[i][j]; bo=i; lo=j;
			}
		}
	}
	printf("\n Gia tri tham my lon nhat: %d",MAX);
	
	while((bo>0)&&(lo>0)){
		if(L[bo][lo]==L[bo][lo-1]) lo=lo-1;
		if(L[bo][lo]==L[bo-1][lo-1]+v[bo][lo]){
			printf("\n bo=%d, lo=%d",bo,lo);
			bo=bo-1; lo=lo-1;
		}
	}
	return 0;
}
