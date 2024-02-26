#include<stdio.h>

#define For(i,a,b) for(i=a;i<=b;i++)

#define swap(a,b) {a^=b;b^=a;a^=b;}

int i;
int a=5,b=12;
int main(){
	swap(a,b);
	printf("\n a=%d,b=%d",a,b);
	For(i,1,10) printf("\n Hello");
	return 0;
}

