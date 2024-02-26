#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char *ch="ABCDEFGHIJKLMNOPQRSTUVXYZ";
	int j, i=0;
	while((2*i)<strlen(ch)){
		for(j=0;j<strlen(ch)-i;j++)
			cout<<' ';
		for(j=i;j<2*i;j++)
			cout<<ch[j];
		for(j=2*i;j>=i;j--){
			cout<<ch[j];
			cout<<"\n";
			i++;
		}
	}
	getch();
}
