#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int sophantu, i, j, k;
	cout<<"\n Cho biet so phan tu o dong cuoi cung(luon>4):";
	cin>>sophantu;
	j=1;
	for(i=0;i<((sophantu+1)/2-1);i++){
		for(k=1;k<=((sophantu-j)/2);k++){
			cout<<" ";
		}
		for(k=1;k<=j;k++){
			switch(i%3){
				case 0:cout<<"A";break;
				case 1:cout<<"B";break;
				case 2:cout<<"C";break;
			}
		}
		cout<<"\n";
		j=j+2;
	}
	getch();
}
