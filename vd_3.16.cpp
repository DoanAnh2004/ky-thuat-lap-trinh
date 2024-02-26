#include<stdio.h>
#include<stdlib.h>

struct threeNum
{
	int n1, n2, n3;
};

int main()
{
	int n;
	struct threeNum num;
	FILE *fptr;
	if((fptr = fopen("D:\\program.bin","rb")) == NULL){
		printf("Error! opening file");
		exit(1);
	}
	
	for(n=1;n<5;++n)
	{
		fread(&num, sizeof(struct threeNum), 1, fptr);
		printf("n1: %d\tn2: %d\tn3: %d \n",num.n1,num.n2,num.n3);
	}
	
	//Doc va hien thi phan tu dau tien
	fseek(fptr,0,SEEK_SET);
	fread(&num, sizeof(struct threeNum), 1, fptr);
	printf("Phan tu dau tien: \n");
	printf("n1: %d\tn2: %d\tn3: %d \n",num.n1,num.n2,num.n3);
	
	//Doc va hien thi phan tu thu ba
	int size = sizeof(threeNum);
	fseek(fptr,2*size,SEEK_SET);
	fread(&num,size,1,fptr);
	printf("\n Phan tu thu ba: \n");
	printf("n1: %d\tn2: %d\tn3: %d \n",num.n1,num.n2,num.n3);
	
	fclose(fptr);
	return 0;
}
