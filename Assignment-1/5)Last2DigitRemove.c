#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("After removing last 2 digit : %d",(num/100));
}