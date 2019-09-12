#include <stdio.h>
void main(){
	float a,b,c,max;
	printf("Enter 3 Numbers");
	scanf("%f %f %f",&a,&b,&c);
	max = a>b?a>c?a:c:b>c?b:c;
	printf("%f is the maximum Number",max);
}