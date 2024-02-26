#include<stdio.h>

int h[]={400,100,20,30,210,350,80,120};
int n=sizeof(h)/sizeof(h[0]);
int d[100];
int t[100];

int M=410;
int main(){
	int i,j,tam;
	int dg=1; int du=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(h[i]<h[j]){
				tam=h[i];
				h[i]=h[j];
				h[j]=tam;
			}
		}
	}
	
	for(i=0;i<n-1;i++){
		if(t[i]==0){
			d[i]=dg;
			du=M-h[i];
			t[i]=1;
			
			for(j=i+1;j<n;j++){
				if((t[j]==0)&&(h[j]<=du)){
					t[j]=1;
					d[j]=dg;
					du=du-h[j];
				}
			}
		}
		dg=dg+1;
	}
	printf("\n So dia toi thieu de ghi: %d",dg-1);
	for(i=1;i<=dg-1;i++){
		printf("\n Dia thu %d \n",i);
		for(j=0;j<n;j++){
			if(d[j]==i) printf("%4d",h[j]);
			printf("\n -------------------- \n");
		}
	}
	return 0;
}
