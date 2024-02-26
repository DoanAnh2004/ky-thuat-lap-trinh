#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float num1, num2, min, max;
	cout<<"Nhap num1 va num2:"; cin>>num1>>num2;
	(num1<num2)?(min=num1, max=num2):(min=num2, max=num1);
	cout<<"\nGia tri min="<<min;
	cout<<"\nGia tri max="<<max;
	getch();
}
