#include<stdio.h>
#include<conio.h>
#define MAX 100

int a[]={5,7,10,9,2,12,15};
int b[MAX];
int n=sizeof(a)/sizeof(a[0]);
int P=12;

void inketqua(){
	int s=0;
	int j;
	for(j=0;j<n;j++){
		if(b[j]==1) s=s+a[j];
	}
	if(s==P){
		printf("\n");
		for(int j=0;j<n;j++){
			if(b[j]==1){
				printf("%3d",a[j]);
			}
		}
	}
}

void thu(int i){
	int j;
	for(j=0;j<=1;j++){
		b[i]=j;
		if(i<n-1) thu(i+1);
		else inketqua();
		b[i]=0;
	}
}
int main(){
	thu(0);
	getch();
	return 0;
}
