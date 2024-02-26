#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#define MAX 15
using namespace std;
int mang[MAX];
void in_mang(int *mang){
	int i;
	for(i=0;i<MAX;i++){
		cout<<setw(4)<<mang[i];
	}
}
void sort(int l, int r){
	int i, j, x, w;
	i=l;
	j=r;
	x=mang[(l+r)/2];
	do{
		while(mang[i]<x) i++;
		while(x<mang[j]) j--;
		if(i<=j){
			w=mang[i];
			mang[i]=mang[j];
			mang[j]=w;
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) sort(l,j);
	if(i<r) sort(i,r);
}
void quicksort(){
	sort(0, MAX-1);
}
int main(){
	int i;
	randomize();
	for(i=0;i<MAX;i++){
		mang[i]=random(50);
	}	
	cout<<"Day tu dong phat sinh ngau nhien, no chua co trat tu:\n";
	in_mang(mang); cout<<"\n";
	quicksort();
	cout<<"Day da xep tang nho thuat toan Quick Sort:\n";
	in_mang(mang);
	getch();
}
