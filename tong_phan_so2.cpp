#include<stdio.h>

float Tong(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		s = s + i;
	}
	return s;
}

float cauf(float n){
	if(n==1) return 1.0;
	else return cauf(n-1) + 1/(Tong(n));
}

int main(){
	printf("%.2f",cauf(3));
	return 0;
}
