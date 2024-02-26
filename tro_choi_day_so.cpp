#include<stdio.h>
#include<math.h>
#define MAX 100
int n;
int b[MAX];
int c[MAX];
int min;
//----------------------------------
void Doc_DL(){
	FILE *fi=fopen("D:\\ky thuat lap trinh\\Documents\\SEQGAME.txt","r+");
	if(fi=NULL)
		printf("Mo file khong thanh cong");
	else{
		fscanf(fi,"%d",&n);
			for(int i=1;i<=n;i++)
			fscanf(fi,"%d",&b[i]);
			for(int i=1;i<=n;i++)
			fscanf(fi,"%d",&c[i]);
	}
	fclose(fi);
}
//Sap Quick_sort
void quick_sort(int a[],int l,int r){
	int mid;
	int key;
	if(l<r){
		mid=(l+r)/2;
		key=a[mid];
		int i=l; int j=r;
		while(i<j){
			while(a[i]<key) i=i+1;
			while(a[j]>key) j=j-1;
			if(i<=j){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
				i=i+1;
				j=j-1;
			}
		}
		if(i<r) quick_sort(a,i,r);
		if(j>l) quick_sort(a,l,j);
	}
}
void Xu_ly(){
	int i,j,v;
	min=1000;
	i=1; j=n;
	while((i<=n)&&(j>=1)){
		v=b[i]+c[j];
		if(v>=0) j=j-1;
		else if(v<0) i=i+1;
		if(abs(b[i]+c[j])<min) min=abs(b[i]+c[j]);
	}
}
//-----------------------------------------
void gh_file(){
	FILE *fo=fopen("D:\\ky thuat lap trinh\\Documents\\SEQGAMEOUT.txt","w+");
	if(fo==NULL)
		printf("Mo file khong thanh cong");
	else{
		fprintf(fo,"%d",min);
		fclose(fo);
	}
}
//------------------------------------------
int main(){
	Doc_DL();
	quick_sort(b,1,n);
	quick_sort(c,1,n);
	Xu_ly();
	gh_file();
	return 0;
}
