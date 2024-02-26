#include<stdio.h>
unsigned long
u1[] = {123456789,123456789,987654321},
u2[] = {0,123456789,123456789};
int main(){
	unsigned long carry=0;
	int i;
	for(i=2;i>=0;i--){
		u1[i] = u1[i] + u2[i] + carry;
		carry = u1[i] / 1000000000;
		u1[i] = u1[i] % 1000000000;
	}
	
	
	printf("%lu",u1[0]);
	for(i=1;i<3;i++){
		printf("%09lu",u1[i]);
	}
	printf("\n");
	return 0;
}
