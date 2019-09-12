#include <stdio.h>
#include <math.h>
void main(){
	float h,k,r,s,Cch,chord;
	printf("Enter values of centre(h,k) and radius(r) of a circle and s for(x = s)");
	scanf("%f %f %f %f",&h,&k,&r,&s);
	Cch = h-s;
	chord = 2*(sqrt(r*r - Cch*Cch));
	printf("Length of chord : %f",chord);
}