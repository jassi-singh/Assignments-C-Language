#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,A;
	printf("enter value of a,b,c ");
	scanf("%f %f %f",&a,&b,&c);
	A = (b*b + c*c -a*a)/(2*b*c);
	printf("Angle A = %f",(acos(A))*180/3.14);
}