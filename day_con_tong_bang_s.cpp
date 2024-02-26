#include<stdio.h>

int goi[]={0,10,8,7,6,6,6,6};
int n=sizeof(goi)/sizeof(goi[0]);

int P[100][100];
int S=25;
int main(){
	int i,j;
	for(i=0;i<100;i++){
		P[i][0]=1;
		P[0][i]=0;
	}
	P[0][0]=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=S;j++){
			if((P[i-1][j]==1)||(P[i-1][j=goi[i]]==1)) P[i][j]==1;
		}
	}
	if(P[n][S]==1) printf("\n Co day con \n");
	for(i=n;i>0;i--){
		if((P[i][S]==1)&&(P[i-1][S]==0)){
			printf("%3d",goi[i]);
			S=S-goi[i];
		}
	}
	return 0;
}
