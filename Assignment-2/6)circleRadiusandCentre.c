#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c;
	printf("enter a,b,c for x^2 + y^2 +ax + by + c");
	scanf("%f %f %f",&a,&b,&c);
	printf("centre : (%f,%f) \nRadius : %.2f",-a/2,-b/2,sqrt((a/2)*(a/2) + (b/2)*(b/2) -c));
}