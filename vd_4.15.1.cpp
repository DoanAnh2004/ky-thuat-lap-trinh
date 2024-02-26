#include<stdio.h>
#define MAX 50
int n;
int a[MAX];
int b[MAX];

void inketqua(){
	int j;
	printf("\n");
	for(j=1;j<=n;j++){
		printf("%2d",a[j]);
	}
}

void thuin(int i){
	int j;
	for(j=1;j<=n;j++){
		if(b[j]==0){
			a[i]=j;
			b[j]=1;
			if(i<n) thuin(i+1);
			else inketqua();
			a[i]=0;
			b[j]=0;
		}
	}
}

int main(){
	printf("\n Nhap n");
	scanf("%d",&n);
	thuin(1);
	return 1;
}
