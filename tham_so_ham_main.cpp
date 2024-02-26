#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	if(argc == 3){
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		printf("%d + %d = %d",x,y,x+y);
	}
	else printf("Sai! VD: Cong 2912 1706");
	return 0;
}
