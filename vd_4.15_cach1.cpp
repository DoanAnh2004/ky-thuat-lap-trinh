#include<stdio.h>
int n=5; int P=211;

void inday(){
	for(int x1=0;x1<=9;x1++)
		for(int x2=0;x2<=9;x2++)
			for(int x3=0;x3<=9;x3++)
				for(int x4=0;x4<=9;x4++)
					for(int x5=0;x5<=9;x5++)
	if(x1+x2+x3+x4+x5==P)
	printf("%2d %2d %2d %2d %2d \n",x1,x2,x3,x4,x5);
}

int main(){
	inday();
	return 0;
}
