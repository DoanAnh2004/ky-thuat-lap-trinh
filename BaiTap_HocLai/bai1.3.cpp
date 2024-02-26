#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	float s1, s2, min, max;
	cout<<"Nhap 2 so thuc:"; cin>>s1>>s2;
	min=(s1<s2)?s1:s2;
	max=(s2>s1)?s2:s1;
	cout<<"\nSo min="<<min;
	cout<<"\nSo max="<<max;
	getch();
}
