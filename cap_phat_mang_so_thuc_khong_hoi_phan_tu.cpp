#include<malloc.h>
#include<stdio.h>

void floatArrOut(float a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%f ",a[i]);
}
float* floatArrPushBack(float* a, int *n, float x){
	int m = (*n)+1;
	float* anew = (float*)realloc(a,m*sizeof(float));
	if(anew != NULL){
		anew[*n] = x; (*n)++;
	}
	return anew;
}

float* floatArrInput(int *n){
	float *anew, *a = NULL; float x;
	*n = 0;
	while(scanf("%f",&x)>0){
		anew = floatArrPushBack(a,n,x);
		if(anew != NULL)
			a = anew;
	}
	return a;
}
int main(){
	float *B; int nB;
	printf("Input elements:\n");
	B = floatArrInput(&nB);
	// Do something here...
	printf("%d element(s):\n",nB);
	floatArrOut(B,nB);
	// Free allocated memory
	if(B != NULL)
		free(B);
	return 0;
}
