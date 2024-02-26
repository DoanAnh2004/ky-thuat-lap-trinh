#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int ktra(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0) return 0;
		return 1;
	}
}
int main(){
	int i;
	cout<<"\t\t\t BANG CAC SO NGUYEN TO < 2000:\n\n";
	for(i=2;i<2000;i++){
		if(ktra(i)){
			cout<<setw(5)<<i;
		}
	}
	getch();
}
