#include<stdio.h>
#define MAX 2000

char c, name[10];
int i,j,cur,carry,n,nf,count;
int current[2001], pp1[2001], pp2[2001], pp3[2001];
int mup1,mup2,mup3;

int main(){
	n=i=j=0;
	printf("\n Nhap 0 < n < 721 tinh giai thua \n");
	while((c=getchar())!='\n');
	name[i++]=c;
	name[i]='\0';
	
	while(j<i){
		nf *=10;
		nf += name[j++] &15;
	}
	
	printf("So nguyen nhap vao %d \n\n",nf);
	
	for(i=MAX;i>=0;i--)
	pp1[i]=pp2[i]=pp3[i]=current[i]=0;
	current[MAX]=2;n=3;
	while(n<=nf){
		mup1=n/100;
		mup2=n/10-10*mup1;
		mup3=n-(mup1*100+mup2*10);
	}
	for(i=MAX;i>=0;i--){
		pp1[i]=current[i]*mup1;
		pp2[i]=current[i]*mup2;
		pp3[i]=current[i]*mup3;
	}
	current[MAX]=pp3[MAX];
	current[MAX-1]=pp3[MAX-1]+pp2[MAX];
	for(i=MAX;i>2;i--){
		current[i-2]=pp3[i-2]+pp2[i-1]+pp1[i];
	}
	carry=0;
	for(i=MAX;i>=1;i--){
		if(current[i]>9){
			carry=current[i]/10;
			current[i]=current[i]%10;
			current[i-1]+=carry;
		}
	}
	n++;
	for(count=0;current[count]==0;count++)
	printf("Co %d ky so \n\n",MAX-count+1);
	for(i=count;i<=MAX;i++){
		printf("%ld",current[i]);
		j=(i-count+1)%75;
		if(j==0)
		printf("\n");
	}
	return 0;
}
