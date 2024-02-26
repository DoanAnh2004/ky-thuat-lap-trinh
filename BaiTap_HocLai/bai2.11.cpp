#include<iostream>
#include<conio.h>
#include<iomanip>
#define n 15
using namespace std;
int main(){
	int i, j, hs[n], tam[n];
	hs[0]=1;
	cout<<"TAM GIAC VUONG PASCAL 14 DONG: "<<endl;
	for(i=1;i<n;i++) hs[i]=0;
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++)
			tam[j]=hs[j];
			cout<"\n";
		for(j=1;j<=i;j++){
			tam[j]+=hs[j-1];
			cout<<setw(5)<<tam[j];
		}
		for(j=1;j<=i;j++)
			hs[j]=tam[j];
	}
	getch();
}
