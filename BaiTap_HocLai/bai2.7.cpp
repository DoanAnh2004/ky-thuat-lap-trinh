#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int d, n, g, songhiem=0;
	cout<<"    Trau dung         Trau nam        Trau gia ";cout<<"\n";
	for(d=0;d<=20;d++){
		for(n=0;n<=33;n++){
			for(g=0;g<=100-(d+n);g++){
				if((5*d+3*n+g/3)==100 && (d+n+g)==100){
					cout<<"\t"<<d<<"\t\t"<<n<<"\t\t"<<g; cout<<endl;
					songhiem++;
				}
			}
		}
	}
	cout<<"\n Bai toan co so nghiem="<<songhiem;
	getch();
}
