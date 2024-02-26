#include<stdio.h>

int W[]={0,10,20,30,45,50,60,80};

int V[]={0,60,100,50,10,70,90,20};

int Pmax=120;
int n=sizeof(W)/sizeof(W[0])-1;
int F[20][300];

int main(){
	int i,j,k;
	for(j=1;j<=Pmax;j++){
		F[0][j]=0;
	}
	for(i=1;i<=n;i++){
		F[i][0]=0;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<Pmax;j++){
			F[i][j]=F[i-1][j];
			if(((F[i-1][j-W[i]]+V[i])>F[i][j])&&(j-W[i]))
				F[i][j]=F[i-1][j-W[i]]+V[i];
		}
	}
	printf("\n Gia tri lon nhat thu duoc: %d",F[n][Pmax]);
	printf("\n Cac vat duoc lay la: \n");
	j=Pmax;
	for(k=n;k>0;k--){
		if(F[k][j]!=F[k-1][j]){
			printf("\n Vat %d chon co the tich: %d, gia tri %d",k,W[k],V[k]);
			j=j-W[i];
		}
	}
	return 0;
}
