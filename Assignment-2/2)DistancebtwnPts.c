#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d,distance;
	printf("Enter coordinates (a,b) and (c,d) : ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	distance = sqrt(((a-c)*(a-c) + (b-d)*(b-d)));
	printf("\nDistance B/W (a,b) and (c,d) : %f",distance);
}