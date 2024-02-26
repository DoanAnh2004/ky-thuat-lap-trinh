#include<stdio.h>
int isPrime(int n){
	int flag=1;
	
	if(n<=1) return 0;
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	int n=13;
	if(isPrime(n)){
		printf("\n So Nguyen to \n");
	} else printf("\n Khong la so Nguyen to \n");
	return 0;
}
