#include <stdio.h>
void main(){
	float a , b;
	scanf("%f %f",&a,&b);
	if(a>b)
		printf("%.3f  %.3f",a,b);
	else 
		printf("%.3f  %.3f",b,a);
}