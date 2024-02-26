#include<stdio.h>
#define MAX 10

int a[MAX][MAX];

int dem;
int k=3;

void cover(int x, int y, int s, int t){
	if(s==2) {
		dem=dem+1;
		if(t!=1) a[x][y]=dem;
		if(t!=2) a[x][y+1]=dem;
		if(t!=3) a[x+1][y]=dem;
		if(t!=4) a[x+1][y+1]=dem;
		return;
	}
	
	if(t==1) {
		cover(x,y+s/2,s/2,3);
		cover(x+s/2,y,s/2,2);
		cover(x+s/2,y+s/2,s/2,1);
		cover(x+s/4,y+s/4,s/2,1);
	}
	if(t==2) {
		cover(x,y,s/2,4);
		cover(x+s/2,y,s/2,2);
		cover(x+s/2,y+s/2,s/2,1);
		cover(x+s/4,y+s/4,s/2,2);
	}
	if(t==3) {
		cover(x,y,s/2,4);
		cover(x,y+s/2,s/2,3);
		cover(x+s/2,y+s/2,s/2,1);
		cover(x+s/4,y+s/4,s/2,3);
	}
	if(t==4) {
		cover(x,y,s/2,4);
		cover(x+s/2,y,s/2,2);
		cover(x,y+s/2,s/2,3);
		cover(x+s/4,y+s/4,s/2,4);
	}
}

void Xuat(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
}
int main(){
	cover(1,1,8,2);
	Xuat();
	return 0;
}
