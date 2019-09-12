#include <stdio.h>
void main(){
	float a,b,c,slope;
	printf("Enter a,b,c for 'ax^2 + bx + c'");
	scanf("%f %f %f",&a,&b,&c);
	printf("Slope of line = %f",-a/b);
}