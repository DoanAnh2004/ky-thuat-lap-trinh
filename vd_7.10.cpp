#include<stdio.h>
#define INT_MAX 1000


int nhandaymt(int a[], int n){
	int F[n][n];
	int i,j,k,L,q;
	for(i=1;i<n;i++)
		F[i][i]=0;
	for(L=2;L<n;L++)
	{
		for(i=1;i<n-L+1;i++)
		{
			j=i+L-1;
			F[i][j]=INT_MAX;
			for(k=i;k<=j-1;k++){
				q=F[i][k]+F[k+1][j]+a[i-1]*a[k]*a[j];
				if(q<F[i][j])
				F[i][j]=q;
			}
		}
	}
	return F[1][n-1];
}

int main(){
	int a[]={1,2,3,4};
	int size=sizeof(a)/sizeof(a[0]);
	
	printf("\n So luong phep nhan it nhat la = %d",nhandaymt(a,size));
	return 0;
}
