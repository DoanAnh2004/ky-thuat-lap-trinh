#include<stdio.h>
int a[100];
int n=5;
int P=211;

void inday(int a[]){
	int S=0;
	for(int k=1;k<=n;k++){
		S=S+a[k];
	}
	if(S==P){
		for(int k=1;k<=n;k++){
			printf("%3d",a[k]);
		}
	}
	printf("\n");
}

void taoday(int a[],int i){
	for(int j=0;j<=9;j++){
		a[i]=j;
		if(i<n) taoday(a,i+1);
		else
		inday(a);
		a[i]=0;
	}
}
int main(){
	taoday(a,1);
	return 0;
}
