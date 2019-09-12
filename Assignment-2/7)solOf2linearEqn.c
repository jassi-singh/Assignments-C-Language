#include <stdio.h>
void main(){
	float a,b,c,p,q,r,x,y;
	printf("Enter a,b,c,p,q,r for 'ax + by + c' and 'px + qy + r' ");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	x = (q*c - r*b)/(b*p - q*a);
	y = -(a*x + c)/b;
	printf("x :%.2f and y:%.2f",x,y);
}