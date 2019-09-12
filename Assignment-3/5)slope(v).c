#include <stdio.h>
void main(){
	float a , b , c;
	printf("Enter a, b, c for eqn [ax + by + c = 0] ");
	scanf("%f %f %f",&a,&b,&c);
	printf("slope = %.4f\n",-a/b);
	if(b == 0)
		printf("Line is VERTICAL .");
}