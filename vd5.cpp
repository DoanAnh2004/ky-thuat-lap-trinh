#include<stdio.h>
#include<math.h>

void swap(float*x,float*y)
{
	float u = *x;
	*x = *y; *y=u;
}
void adjust(float*x,float*y)
{
	if(fabs(*x)>fabs(*y))
		swap(&(*x), &(*y));
		//tuong duong swap(x,y)
}


int main(){
	float a = -1864.5F, b = 273.9F;
	adjust(&a,&b);
	printf("New values of a and b now are a = %f, b = %f\n",a,b);
}
