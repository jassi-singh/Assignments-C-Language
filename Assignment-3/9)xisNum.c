#include <stdio.h>
void main(){
	float a, b, c, d, x;
	printf("Enter number a, b, c, d and x ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&x);
	if(x==a)
		printf("x is equal to a");
	else if(x==b)
		printf("x is equal to b");
	else if(x==c)
		printf("x is equal to c");
	else if(x==d)
		printf("x is equal to d");
}