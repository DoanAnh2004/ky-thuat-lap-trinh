// Bieu thuc Zero
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char a[10]="123456789";
int tt[10];
int N=7;
//----------------------
struct chuoi {char st[10];};

chuoi luu[10];
//----------------------
int s=0;
int k=0;
//----------------------
void xlc(){
	k=0;
	strcpy(luu[k].st,"");
		for(int t=0;t<N;t++)
			if(tt[t]==0){
				char b[2]={a[t]};
				strcat(luu[k].st,b);
			}
			else{
				if(t>0) k=k+1;
				char b[2]={a[t]};
				strcpy(luu[k].st,b);
			}
}
//-----------------------
int dauth(int k){
	if(k==0) return tt[0];
	else{
		int dem=0;
			for(int z=0;z<k;z++)
				dem=dem+strlen(luu[z].st);
				return tt[dem];
	}
}
//-----------------------
void kt_in(){
	xlc();
	s=0;
		for(int z=0;z<=k;z++)
			if(dauth(z)==1) s=s+atoi(luu[z].st);
			else
				s=s-atoi(luu[z].st);
			if(s==0){
				for(int z=0;z<=k;z++)
					if(dauth(z)==1) printf("+%2d",atoi(luu[z].st));
					else
					printf("-%2d",atoi(luu[z].st));
					printf("\n");
			}
}
//-------------------------
void thu(int i){
	int j;
		for(int j=0;j<=2;j++){
			if((i==0)&&(j==0)) continue;
				tt[i]=j;
			if(i<N-1) thu(i+1);
				else{
					kt_in();
					tt[i]=0;
				}
		}
}
//--------------------------
int main(){
	thu(0);
	return 0;
}
