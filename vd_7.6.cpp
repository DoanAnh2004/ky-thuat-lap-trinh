#include<stdio.h>

int arr[]={0,25,22,9,33,21,50,41,60,90,70};
int n=sizeof(arr)/sizeof(arr[0]);
int L[100];
int T[100];

void Xuly(int i){
	int j,nho;
	
	int Max=1;
		for(j=0;j<i;j++)
			if(arr[i]>arr[j])
				if(Max<1+L[j]){
					Max=1+L[j];
					nho=j;
				}
			L[i]=Max;
				if(Max>1) T[i]=nho;
					if(i<n-1) Xuly(i+1);
}
int main(){
	L[0]=1;T[1]=0;
	
	Xuly(1);
	printf("%d \n",n);
	int k,tr=0;
	
	printf("\n Day con tang dan: \n");
	for(k=1;k<n-1;k++)
	if(T[k]==tr){
		printf("%3d",arr[k]);tr=k;
	}
	return 0;
}
