#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int max, soh, soc, dapso;
int main(){
	cout<<"\tNhap gioi han tren cua cot hoac hang:";
	cin>>max;
	cout<<"\n\n";
	for(soc=1;soc<=max;soc=soc+1){
		cout<<setw(7)<<soc;
		cout<<" |";
	}
	cout<<"\n---";
	for(soc=1;soc<=max;soc=soc+1){
		cout<<"--------";
	}
	for(soh=1;soh<=max;soh=soh+1){
		cout<<"\n"<<soh;
		cout<<"|";
		for(soc=1;soc<=soh;soc=soc+1){
			dapso=soc*soh;
			cout<<"\t"<<dapso;
		}
	}
	getch();
}
