#include <stdio.h>
void main(){
	float a,b,c,d,max;
	printf("Enter 4 Numbers ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	max = a>b? c>d? a>c? a:c : a>d? a:d : c>d? b>c? b:c : b>d? b:d ;
	printf("%f is the maximum Number",max);
}