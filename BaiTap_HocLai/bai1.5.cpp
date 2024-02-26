#include<iostream>
#include<conio.h>
using namespace std;
// Bo du lieu test: Vao: -1.5  1.5  2.5  1.5
// Ra: Tong = 4; Trung binh cong = 1
int main(){
	int dem=0; float sum=0, tbc=0;
	float s1, s2, s3 ,s4;
	cout<<"Nhap 4 so thuc nam trong khoang dong [-3.0, 3.0]: ";
	cin>>s1>>s2>>s3>>s4;
	if(s1>=-3.0 && s1<=3.0){
		dem++;
		sum=sum+s1;
	}
	if(s2>=-3.0 && s2<=3.0){
		dem++;
		sum=sum+s2;
	}
	if(s3>=-3.0 && s3<=3.0){
		dem++;
		sum=sum+s3;
	}
	if(s4>=-3.0 && s4<=3.0){
		dem++;
		sum=sum+s4;
	}
	tbc=sum/dem;
	cout<<" \n Tong cua 4 so thuc thuoc khoang dong [-3.0, 3.0] = "<<sum;
	cout<<" \n Trung binh cong cua 4 so ay = "<<tbc;
	getch();
}
