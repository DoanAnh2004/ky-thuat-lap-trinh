#include<stdio.h>
int Ktra_cochan(int arr[],int n){
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			flag=1;
			break;
		}
	}
	return flag;
}
int main(){
	int arr[]={1,3,2,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(Ktra_cochan(arr,n))
	printf("\n Yes \n");
	else printf("\n No \n");
	return 0;
}
