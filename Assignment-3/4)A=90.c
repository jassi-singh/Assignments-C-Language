#include <stdio.h>
void main(){
	float a,b,c;
	printf("Enter a , b , c sides of triangle ");
	scanf("%f %f %f",&a,&b,&c);
	if(a*a == b*b + c*c)
		printf("Angle 'A' is 90 degree.");
	else 
		printf("Angle 'A' is not 90 degree.");
}