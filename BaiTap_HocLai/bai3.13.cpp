#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int Test_Nguyen_To(long int k){
	long int i, p = sqrt(k);
	for(i=2;i<=p;i++){
		if(k%i==0) return 0;
	}
	return 1;
}
int Test_Dao(long int k){
	char s[20]; long n;
	ltoa(k,s,10); strrev(s); n=atol(s);
	if(Test_Nguyen_To(n)) return 1;
	return 0;
}
int Test_Tong(long int k){
	int du, s=0;
	while(k!=0){
		du=k%10; k=k/10; s=s+du;
	}
	if(Test_Nguyen_To(s)) return 1;
	return 0;
}
int Test_So(long int k){
	int du;
	while(k!=0){
		du=k%10; k=k/10;
		if(du==0||Test_Nguyen_To(du)==0) return 0;
	}
	return 1;
}
int main(){
	int d=0; long k;
	cout<<" Tat ca cac so co 5 chu so can tim thoa man dau bai:"<<endl;
	for(k=10001;k<=99999;k+=2){
		if(Test_Nguyen_To(k) && Test_Dao(k) && Test_Tong(k) && Test_So(k)) cout<<setw(7)<<k;
	}
	getch();
}
