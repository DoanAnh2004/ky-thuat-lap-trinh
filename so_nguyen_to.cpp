#include<stdio.h>
#include<math.h>
char a[20000];

void sang(long n){
	long i,j,u;
	long x=(long)sqrt(n);
	a[0]=1;
	a[1]=1;
	for(i=2;i<=x;i++){
		u=n/i+1;
		if(a[i]==0) 
			for(j=i;j<u;j++)
			a[i*j]=1;
	}
}
int main(){
	long i,k,A,B;
	printf("\n Nhap A,B: \n");
	scanf("%li %li",&A,&B);
	sang(B);
	for(i=A;i<=B;i++)
		if(a[i]==0) printf("%li \n",i);
	return 0;
}
