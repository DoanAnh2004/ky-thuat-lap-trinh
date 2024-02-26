#include<stdio.h>
#include<limits.h>  // Chua hang so INT_MIN va INT_MAX
#define nMAX 10000
int a[nMAX+2], L[nMAX+2], T[nMAX+2];

void ReadData(char* fname, int& n); // Ham doc du lieu tu tap tin
void BuildSolutionTable(int n);     // Ham xay dung bang phuong an
void TraceAndWriteResult(char* fname, int n); // Ham truy vet va xuat ket qua
int main(){
	int n;
	ReadData("INCSEQ",n);
	BuildSolutionTable(n);
	TraceAndWriteResult("INCSEQ.OUT",n);
	return 0;
} //------------------------------------------------------
void ReadData(char* fname, int& n){ // Ham doc du lieu tu tap tin
	FILE* fp=fopen(fname,"rt");
	if(fp!=NULL){
		fscanf(fp,"%d",&n);
		for(int i=1;i<=n;i++) // De danh a[0] de chen -oo
			fscanf(fp,"%d",&a[i]);
		fclose(fp);
	}
} //-------------------------------------------------------
void BuildSolutionTable(int n){ // Ham xay dung bang phuong an
	int i,j,jmax;
	a[0]=INT_MIN; a[n+1]=INT_MAX; // -oo va +oo vao dau day, cuoi day
	L[n+1]=1;
	for(i=n;i>=0;i--){
		jmax=n+1;
		for(j=i+1;j<=n+1;j++){
			if((a[j]>a[i])&&(L[j]>L[jmax]))
				jmax=j;
		}
		L[i]=L[jmax]+1; // Luu do dai day con tang dai nhat tu a[i]
		T[i]=jmax;      // Luu vet: phan tu dung lien sau a[i] la a[jmax]
	}
} //--------------------------------------------------------
void TraceAndWriteResult(char* fname, int n){ // Ham truy vet tim nghiem toi uu
	FILE* fp=fopen(fname,"wt");
	if(fp!=NULL){
		fprintf(fp,"%d\n",L[0]-2); // Chieu dai day con tang dai nhat
		int i=T[0];                // Bat dau truy vet tim nghiem
		while(i!=n+1){
			fprintf(fp,"a[%d]=%d\n",i,a[i]);
			i=T[i];
		}
	}
}
