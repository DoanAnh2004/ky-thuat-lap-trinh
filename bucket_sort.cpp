#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bucketSort(int arr[], int n){
	int max_val = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max_val){
			max_val = arr[i];
		}
	}
	
	int buckets[max_val];
	memset(buckets, 0, sizeof(buckets));
	
	for(int i=0;i<n;i++){
		buckets[arr[i]-1]++;
	}
	
	int k=0;
	for(int i=0;i<max_val;i++){
		for(int j=0;j<buckets[i];j++){
			arr[k++]=i+1;
		}
	}
}

int main(){
	int n;
	printf("Nhap so phan tu cua mang:  ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap cac ptu cua mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Mang ban dau: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	bucketSort(arr,n);
	
	printf("Mang da sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
