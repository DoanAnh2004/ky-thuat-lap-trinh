#include<stdio.h>

int n1[]={3,1,4,5,0};
int n2[]={5,6,3,4,1};

int n=sizeof(n1)/sizeof(n1[0]);

int a[30];

void ktra_in(){
	int st=0;
	int sd=0;
	int k;
	for(k=0;k<n;k++){
		if(a[k]==0){
			st=st+n1[k];
			sd=sd+n2[k];
		}else{
			st=st+n2[k];
			sd=sd+n1[k];
		}
	}
	if(sd==st+2){
		printf("\n Nua tren: ");
		for(k=0;k<n;k++) if(a[k]==0) printf("%2d",n1[k]);
		else printf("%2d",n2[k]);
		printf("\n Nua duoi: ");
		for(k=0;k<n;k++) if(a[k]==0) printf("%2d",n2[k]);
		else printf("%2d",n1[k]);
	}
}
void thu(int i){
	int j;
	for(j=0;j<2;j++){
		a[i]=j;
		if(i<n-1) thu(i+1);
		else ktra_in();
		a[i]=0;
	}
}
int main(){
	thu(0);
	return 0;
}
