#include<stdio.h>

int caui(int n){
	if(n==0) return 0;
	else {
		return 1+caui(n/10);
	}
}

int cauj(int n){
	if(n==0) return 0;
	else{
		int k=n%10;
		if(k%2==0) return k+cauj(n/10);
		else return cauj(n/10);
	}
}

int main(){
	printf("%d",caui(3456789));
	printf("\n%d",cauj(23456789));
}
