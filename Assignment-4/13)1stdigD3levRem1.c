#include <stdio.h>
void main(){
	int num;
	printf("enter range ");
	scanf("%d",&num);
	printf("Number whose first digit divisible by 3 give remainder 1---");
	for (int i=0;i<num;i++){
		if((i/10)%3==1){
			printf("%d  ",i);
		}
	}
}