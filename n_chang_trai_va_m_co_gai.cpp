#include<stdio.h>

#define n 4
#define m 7
#define cmax 9

int tc[n][m]=
{ 5,3,2,6,1,7,4,
  2,7,5,6,2,1,5,
  6,4,8,3,2,7,9,
  1,2,5,2,4,8,3 };
int max=0;
int ttg[m];
int cap[n];
int luu[n+1];
int maxcu=0;
//-----------------------------
void chuaghep(){
	int i;
	for(i=0;i<n;i++) cap[i]=-1;
}
//-----------------------------
void ktra_chon(){
	int s=0;
	int i;
	for(i=0;i<n;i++)
		s=s+tc[i][cap[i]];
	if(s>max){
		for(i=1;i<=n;i++)
		luu[i]=cap[i-1];
		max=s;
	}
}
//------------------------------
void ketqua(){ //In ket qua ghep cap
	int k;
	for(k=0;k<n;k++)
	printf("\n Chang trai %d ghep voi co gai %d",k,luu[k+1]);
	printf("\n Tong so tinh cam: %d",max);
}
//------------------------------
void ghepdoi(int i, int maxcu){
	int j;
	for(j=0;j<m;j++)
		if((ttg[j]==0)&&(i*cmax+tc[i][j]>maxcu)){
			cap[i]=j; ttg[j]=1; maxcu=maxcu+tc[i][j];
			if(i<n) ghepdoi(i+1,maxcu);
			else
			ktra_chon();
			cap[i]=-1;
			ttg[j]=0;
			maxcu=maxcu-tc[i][j];
		}
}
//-------------------------------
int main(){
	chuaghep();
	ghepdoi(0,maxcu);
	ketqua();
	return 0;
}
