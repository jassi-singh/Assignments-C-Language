#include <stdio.h>
#include <math.h>
void main(){
	float Rsphere,rCircle,area,a,b,c,d,e,f,g,h,planeToCntr;
	printf("Enter variables for equation 'ax + by + cz + d = 0' and for 'x^2 + y^2 + z^2 + ex + fy + gz + h = 0'\n");
	
	scanf("%f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h);

	Rsphere = sqrt((e/2)*(e/2) + (f/2)*(f/2) + (g/2)*(g/2) - h);

	planeToCntr = (a*(-e/2) + b*(-f/2) + c*(-g/2) + d)/sqrt(a*a + b*b + c*c);

	rCircle = sqrt(Rsphere*Rsphere - planeToCntr*planeToCntr);

	printf("Area of circle formed due intersection of sphere and plane : %f",3.14*rCircle*rCircle);

}