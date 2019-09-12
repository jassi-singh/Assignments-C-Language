#include <stdio.h>
void main(){
	float a,b,c,p;
	printf("Enter value of a,b,c for f(X) = 'aX^2 + bX + c' and p for f(p) :");
	scanf("%f %f %f %f",&a,&b,&c,&p);
	printf("f(p) = %f",a*p*p + b*p + c);
}