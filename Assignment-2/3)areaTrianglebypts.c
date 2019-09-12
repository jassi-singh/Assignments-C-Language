#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d,e,f,A,B,C,s,Area;
	printf("enter coordinates of triangle (a,b);(c,d);(e,f) : ");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	A = sqrt((c-e)*(c-e) + (d-f)*(d-f));
	B = sqrt((a-e)*(a-e) + (b-f)*(b-f));
	C = sqrt((c-a)*(c-a) + (d-b)*(d-b));
	s = (A+B+C)/2;
	Area = sqrt(s*(s-A)*(s-B)*(s-C));
	printf("Area of triangle : %f",Area);
}