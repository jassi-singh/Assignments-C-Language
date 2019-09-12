#include <stdio.h>
void main(){
	float a, b, c, d, x,i=0;
	printf("Enter number a, b, c, d and x ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&x);
	if(x==a)
		i++;
	if(x==b)
		i++;
	if(x==c)
		i++;
	if(x==d)
		i++;
	printf("%.1f",i);
}