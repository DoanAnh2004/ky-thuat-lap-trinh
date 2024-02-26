#include<stdio.h>

void print_binary(FILE *fn, int n, int a[], int index){
	if(index==n){
		for(int i=0;i<n;i++){
			fprintf(fn,"%d",a[i]);
		}
		fprintf(fn,"\n");
		return;
	}
	a[index]=0;
	print_binary(fn,n,a,index+1);
	a[index]=1;
	print_binary(fn,n,a,index+1);
}

int main(){
	int n, a[n];
	FILE *fn0=fopen("D:\\ky thuat lap trinh\\Documents\\LKNP.INP.txt","r");
	if(fn0==NULL){
		printf("Mo file khong thanh cong!");
	} else {
		fscanf(fn0,"%d",&n);
	}
	fclose(fn0);
	
	FILE *fn1=fopen("D:\\ky thuat lap trinh\\Documents\\LKNP.OUT.txt","w");
	if(fn1==NULL){
		printf("Mo file khong thanh cong!");
	} else {
		print_binary(fn1,n,a,0);
	}
	fclose(fn1);
	return 0;
}
