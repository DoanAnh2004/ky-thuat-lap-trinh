#include<stdio.h>

int a[50];
int n;
int dem=0;
//-----------------------
void nhap(int &n){
	printf("Nhap n: ");
	scanf("%d",&n);
}
//-----------------------
void kiemtra(int n){
	int S=0;
	for(int i=1;i<n;i++)
		S=S+a[i]*i;
	if(S==n){
		dem++;
		printf("\n");
		for(int i=1;i<n;i++)
		if(a[i]!=0) 
			for(int k=1;k<=a[i];k++)
			printf("%3d",i);
	}
}
//-----------------------
void thu(int i){
	int j;
	for(j=0;j<=n;j++){
		a[i]=j;
		if(i<n-1) thu(i+1);
		else
		kiemtra(n);
		a[i]=0;
	}
}
//-----------------------
int main(){
	nhap(n);
	thu(1);
	printf("\n Co %d cach phan tich \n",dem);
	return 0;
}
