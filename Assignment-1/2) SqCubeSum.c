#include <stdio.h>
void main(){
	float a,b;
	printf("Enter two numbers : ");
	scanf("%f %f",&a,&b);
	printf("a^2 + b^3 = %lf",a*a + b*b*b);
}