#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

// Giai pt trung phuong ax^4 + bx^2 + c = 0

int main(){
	int a, b, c;
	cout<<"Nhap a, b, c: "; cin>>a>>b>>c;
	
	if(a==0){
		if(b==0){
			if(c==0) cout<<"\nPT vo  so nghiem";
			else cout<<"\nPT vo nghiem";
		}
		else{
			if(c==0) cout<<"\nPT co 1 nghiem x=0";
			else{
				if((float)-c/b>0) cout<<"\nPT co nghiem x1 = "<<(float)sqrt(-c/b)<<" x2 = "<<(float)-sqrt(-c/b);
				else cout<<"\nPT vo nghiem";
			}
		}
	}
	
	else{
		int delta = b*b-4*a*c;
		if(delta>0){
			if((-b+sqrt(delta))/2*a>0 && (-b-sqrt(delta))/2*a>0) cout<<"\n x1 = "<<(float)sqrt((-b+sqrt(delta))/2*a)<<" x2 = "<<(float)-sqrt((-b+sqrt(delta))/2*a)<<" x3 = "<<(float)sqrt((-b-sqrt(delta))/2*a)<<" x4 = "<<(float)-sqrt((-b-sqrt(delta))/2*a);
			else if((-b+sqrt(delta))/2*a<0 && (-b-sqrt(delta))/2*a<0) cout<<"\nPT vo nghiem";
			else if((-b+sqrt(delta))/2*a>0 && (-b-sqrt(delta))/2*a<0) cout<<"\n x1 = "<<(float)sqrt((-b+sqrt(delta))/2*a)<<" x2 = "<<(float)-sqrt((-b+sqrt(delta))/2*a);
			else if((-b+sqrt(delta))/2*a<0 && (-b-sqrt(delta))/2*a>0) cout<<"\n x3 = "<<(float)sqrt((-b-sqrt(delta))/2*a)<<" x4 = "<<(float)-sqrt((-b-sqrt(delta))/2*a);
		}
		else if(delta==0){
			if((float)-b/2*a<0) cout<<"\n PT vo nghiem";
			else cout<<"\n x1 = "<<(float)sqrt(-b/2*a)<<" x2 = "<<(float)-sqrt(-b/2*a);
		}
		else if(delta<0) cout<<"\nPT vo nghiem";
	}
	return 0;
}
