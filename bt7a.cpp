#include<stdio.h>
#define NUMBER 212
int main(){
	printf("%d\n",NUMBER);
	#undef NUMBER
	int NUMBER = 100;
	printf("%d",NUMBER);
	return 0;
}
