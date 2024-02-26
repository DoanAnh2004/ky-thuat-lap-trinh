#include<stdio.h>
void Swap(int &a, int b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int first=5;
	int second=7;
	printf("\n first = %d, second = %d",first,second);
	Swap(first, second);
	printf("\n first = %d, second = %d",first,second);
	return 0;
}
