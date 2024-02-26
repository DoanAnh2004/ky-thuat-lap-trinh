#include<malloc.h>
#include<stdio.h>


void arrayFloatOutput(float a[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%f",a[i]);
}
float* arrayFloatInput(int* n){
	float* a = NULL; int m;
	scanf("%d",&m);
	if(m<=0){
		return NULL;
	}
	*n=m;
	a = (float*)calloc(m,sizeof(float));
	if(a!= NULL){
		int i;
		for(int i=0;i<m;i++){
			scanf("%f",&a[i]);
		}	
	}
	return a;
}
int main(){
	float *B; int nB;
	printf("Number and elements: ");
	B = arrayFloatInput(&nB);
	if(B!= NULL){
		// Do something here...
		arrayFloatOutput(B,nB);
		//Free allocated memory
		free(B);
	}
	return 0;
}
