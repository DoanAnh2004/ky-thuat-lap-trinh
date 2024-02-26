#include<stdio.h>
#define nMAX 100
int w[nMAX], v[nMAX], F[nMAX+1][nMAX+1];
void BuildSolutionTable(int n, int W); // Ham xay dung bang phuong an
int main(){
	int n,W;
	FILE* fp=fopen("D:\\ky thuat lap trinh\\BALO.INP.txt","rt");
	if(fp!=NULL){
		fscanf(fp,"%d%d",&n,&W);
		for(int i=0;i<n;i++)
			fscanf(fp,"%d%d",&w[i],&v[i]);
		fclose(fp);	
	}
	BuildSolutionTable(n,W);
	FILE* fp1=fopen("D:\\ky thuat lap trinh\\BALO.OUT.txt","wt");
	if(fp1!=NULL){
		fprintf(fp1,"%d\n",F[n][W]); // In gia tri lon nhat co the lay duoc
		while(n!=0){
			if(F[n][W]!=F[n-1][W]){
				fprintf(fp1,"%d",n);
				W=W-w[n-1];
			}
			n--;
		}
		fclose(fp1);
	}
	return 0;
}//----------------------------------------------------
void BuildSolutionTable(int n, int W){
	for(int j=0;j<=W;j++)
		F[0][j]=0;
	for(int i=1;i<=n;i++)
		for(j=0;j<=W;j++){
			F[i][j]=F[i-1][j];
			if((j>=w[i-1])&&(F[i][j]<F[i-1][j-w[i-1]]+v[i-1]))
				F[i][j]=F[i-1][j-w[i-1]]+v[i-1];
		}
}
