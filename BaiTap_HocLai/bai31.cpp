#include<stdio.h>
int isPrime(int n){
	int flag = 1;
	if(n<=1) return 0;
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(isPrime(n)){
		printf("\n So nguyen to \n");
	}
	else{
		printf("\n Khong la so nguyen to \n");
	}
	return 0;
}
