#include<stdio.h>
#define MAX 100 // So luong thanh pho toi da
#define DISTMAX 5000 // Khoang cach xa nhat

int min(int a, int b)
{
	if(a<b) return a;
	else return b;
}
int dist[MAX];
int maxindex(int dist[],int n)
{
	int mi=0;
	for(int i=0;i<n;i++){
		if(dist[i]>dist[mi])
		mi=i;
	}
	return mi;
}
//
void selectKcities(int n, int weights[4][4], int k)
{
	int centers[MAX];
	for(int i=0;i<n;i++){
		dist[i]=DISTMAX;
	}
	int max=0;
	for(int i=0;i<k;i++){
		centers[i]=max;
		for(int j=0;j<n;j++){
			dist[j]=min(dist[j],weights[max][j]);
		}
		max = maxindex(dist,n);
	}
	printf("\n Khoang cach dai nhat den May chu: %d \n",dist[max]);
	
	printf("\n Cac vi tri dat May chu: ");
	for(int i=0;i<k;i++){
		printf("%d ",centers[i]);
	}
	printf("\n");
}

//Driver code
int main()
{
	int n=4;
	int weights[4][4] = {{0,4,8,5},
				{4,0,10,7},
				{8,10,0,9},
				{5,7,9,0}};
	int k=2;
	selectKcities(n,weights,k);
	return 0;
}
