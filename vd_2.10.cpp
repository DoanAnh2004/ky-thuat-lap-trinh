#include<stdio.h>
int n=5;
int mt[7][7]=
{
	0,0,0,0,0,0,0,
	0,5,4,-4,-2,5,0,
	0,3,-7,-8,4,8,0,
	0,-5,6,7,1,3,0,
	0,-1,9,6,4,5,0,
	0,4,2,-5,8,6,0,
	0,0,0,0,0,0,0};

int kt(int mt[7][7],int i, int j)
{
	int a,b,c,d;
	a=mt[i-1][j];
	b=mt[i+1][j];
	c=mt[i][j-1];
	d=mt[i][j+1];
	if(a+b+c+d>3)
	return 1;
	else return -1;
}
int dem(int mt[7][7],int n){
	int i,j;
	int s=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(kt(mt,i,j)==1) s=s+1;
		}
	}
	return s;
}

int main(){
	printf("So phan tu thuoc ma tran thoa *= %d",dem(mt,n));
	return 0;
}
