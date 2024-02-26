#include<stdio.h>
#define gia 2000
int a[]={100,0,2,1,3,1};
int b[]={100,2,3,4,5,2};

int v[100];

int n=sizeof(a)/sizeof(a[0])-1;

int L[100];
int i,j;
int t1,t2;
int main(){
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(b[i]>b[j]){
				t1=a[i];a[i]=a[j];a[j]=t1;
				t2=b[i];b[i]=b[j];b[j]=t2;
			}
			
	for(i=1;i<=n;i++)
		v[i]=(b[i]-a[i])*gia;
		
	L[0]=0;
	for(i=1;i<=n;i++)
	L[i]=v[i];
	
	for(i=1;i<=n;i++)
		for(j=i-1;j>0;j--)
			if((b[j]<=a[i])&&(L[j]+v[i]>L[i])) L[i]=L[j]+v[i];
			
	int max=L[1];
	int k;
	
	for(i=1;i<=n;i++)
		if(L[i]>max){
			max=L[i]; k=i;
		}
	
	printf("\n So tien cho thue duoc lon nhat: %d",max);
	//Truy vet
	while(k>0){
		printf("\n Cong viec thu %3d, bat dau: %3d, ket thuc: %3d",k,a[k],b[k]);
		j=k-1;
		while((L[j]+v[k]!=L[k])||(b[j]!=a[k])) j=j-1;
		k=j;
	}
	return 0;
}
