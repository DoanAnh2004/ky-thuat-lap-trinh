#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
ktdx(long x){
	long t, m, s=0;
	if(fmod(x,10)==0) return 0;
	for(m=x;x>0;){
		t=fmod(x,10);
		s=s*10+t;
		x=(x-t)/10;
	}
	return (s==m);
}
int main(){
	long i, m, n;
	cout<<"\nNhap gia tri gioi han tren n:"; cin>>n;
	cout<<"\nCac so doi xung co tu 2 chu so tro len can tim la:\n";
	for(i=10;i<=n;i++){
		if(ktdx(i) && ktdx(i*i)){
			cout<<setw(6)<<i<<setw(12)<<i*i;
		}
	}
	getch();
}
