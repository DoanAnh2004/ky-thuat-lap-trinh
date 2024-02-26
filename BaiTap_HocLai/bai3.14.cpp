#include<iostream>
#include<conio.h>
#define max 7
using namespace std;
int binarysearch(int a[], int n, int x){
	int g, d=0, c=n-1, k=-1;
	while(d<=c){
		g=(d+c)/2;
		if(x<a[g]) c=g-1;
		else if(x>a[g]) d=g+1;
		else{k=g; break;}
	}
	return k;
}
int main(){
	int a[max], i, x, k;
	cout<<"Nhap 7 phan tu voi gia tri tang dan cua cac phan tu:"<<endl;
	for(i=0;i<max;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"Cho biet gia tri can tim:"; cin>>x;
	k=binarysearch(a,max,x);
	if(k>=0){
		cout<<"Gia tri "<<x<<" tim thay tai vi tri thu "<<k<<".";
	}
	else cout<<"Khong tim thay "<<x<<" trong day.";
	getch();
}
