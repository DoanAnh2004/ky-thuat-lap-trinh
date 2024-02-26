#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
	cout<<"********BANG CUU CHUONG******** \n";
	cout<<"=================================\n";
	for(int i=1;i<=9;i++){
		for(int j=2;j<=9;j++){
			cout<<j<<"x"<<i<<"="<<j*i<<"\t";
			cout<<endl;
		}
	}
	getch();
}
