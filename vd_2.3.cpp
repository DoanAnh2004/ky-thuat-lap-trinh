#include<stdio.h>

#define abc 50
#define PI 3.1415

#define cong(x,y) x+y
#define khaibao(type,ten) type thap_##ten,cao_##ten,vua_##ten

#define dt_htron(r) (PI*(r)*(r))
#define max(m,n) ((m>n)?m:n)

int a=5;
int b=7;
float u=3.5;
float v=2.8;

int main(){
	printf("\n %d",abc);
	printf("\n %d + %d = %d",a,b,cong(a,b));
	printf("\n %f + %f = %f",u,v,cong(u,v));
	int z=cong(3,7)*cong(2,5);
	printf("\n %d",z);
	khaibao(float,gia);
	thap_gia=230.79;
	vua_gia=250.50;
	cao_gia=300.00;
	printf("\n %f",vua_gia);
	printf("\n dien tich hinh tron ban kinh r=5 la %f",dt_htron(5));
	printf("\n gia tri lon nhat %d",max(a,b));
	#ifdef cde
	printf("\n macro da duoc dinh nghia");
	#endif
	return 0;
}
