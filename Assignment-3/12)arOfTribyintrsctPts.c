#include <stdio.h>
#include <math.h>
void main(){
	float p, q, r, a, b, c, d, chord, area;
	printf("Enter value of center (p,q),radius(r) of circle and a,b and c for (ax + by + c = 0) ");
	scanf("%f %f %f %f %f %f",&p,&q,&r,&a,&b,&c);
	if((a*p + b*q + c) > 0)
	d = (a*p + b*q + c)/sqrt(a*a + b*b);
	else 
		d = -(a*p + b*q + c)/sqrt(a*a + b*b);

	if(d<r){
		chord = sqrt(r*r - d*d);
		area = chord*d;
		printf("%.3f",area);
	}else {
		printf("Line donot intersect circle");
	}
}