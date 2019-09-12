#include <stdio.h>
void main(){
	int num;
	printf("enter range ");
	scanf("%d",&num);
	printf("Number whose sumof digits is divided by7---");
	for (int i=0;i<num;i++){
		if((i%10 + i/10)%7==0){
			printf("%d  ",i);
		}
	}
}