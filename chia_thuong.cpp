#include<stdio.h>
int n=7;
int m=4;
int c[100][100];

void coso(){
	for(int i=0;i<=10;i++){
		c[0][i]=1;
		c[i][0]=0;
	}
	c[0][0]=1;
}
void truy_hoi(int n, int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i<j) c[i][j]=c[i][i];
			else c[i][j]=c[i-j][j]+c[i][j-1];
		}
	}
}
int main(){
	coso();
	truy_hoi(n,m);
	printf("\n So cach chia: %d \n",c[n][m]);
	return 0;
}

