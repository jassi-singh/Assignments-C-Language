#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d,e;
	printf("Enter (a,b) and c,d,e for cx + dy + e");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	float distance = (c*a + d*b + e)/sqrt(c*c + d*d);
	printf("Distance b/w pt and line : %f",distance);
}