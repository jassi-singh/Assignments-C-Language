#include <stdio.h>
void main(){
	float a, b, c;
	printf("Enter 3 numbers 2 equal and 1 different (in any order) ");
	scanf("%f %f %f",&a,&b,&c);
	if(a == b)
		printf("%.4f",c);
	else 
		printf("%.4f",a);
}