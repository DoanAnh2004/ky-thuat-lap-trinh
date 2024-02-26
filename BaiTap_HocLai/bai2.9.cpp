#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, i, j, tong;
	cout<<"\n Nhap so nguyen n <=10000:";
	cin>>n;
	cout<<" Cac so hoan hao nho hon "<<n<<" la:"<<endl;
	for(i=2;i<=n;i++){
		tong=1;
		for(j=2;j<i;j++){
			if(i%j==0) tong+=j;
		}
		if(tong==i) cout<<i<<endl;
	}
	getch();
}
