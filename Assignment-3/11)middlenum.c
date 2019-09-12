#include <stdio.h>
void main(){
	float a, b, c;
	printf("Enter three numbers ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
		if(a<c){
			printf("%.2f",a);
		}else if(c>b){
			printf("%.2f",c);
		}else {
			printf("%.2f",b);
		}
	}else{
		if(b<c){
			printf("%.2f",b);
		}else if(c>a){
			printf("%.2f",c);
		}else {
			printf("%.2f",a);
		}
	}
}
	