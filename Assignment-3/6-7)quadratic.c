#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,D;
	printf("Enter a,b & c for eqn (ax^2 + bx + c)");
	scanf("%f %f %f",&a,&b,&c);
	D = b*b - 4*a*c;
	if(D>0){
		printf("root1 : %.2f\nroot2 : %.2f",(-b + sqrt(D))/(2*a),(-b - sqrt(D))/(2*a)); 
	}else if(D<0){
		printf("root1 : %.2f + i%.2f\nroot2 : %.2f - i%.2f",-b/(2*a),sqrt(-D)/(2*a),-b/(2*a),sqrt(-D)/(2*a));
	}else
	printf("root : %.2f",-b/2);
}