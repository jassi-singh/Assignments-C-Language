#include <stdio.h>
void main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	printf("Ones place is divisible by 3---");
	for(int i =0;i<num;i++){
		if((i%10)%3 == 0){
			printf("%d  ",i);
		}
	}
}