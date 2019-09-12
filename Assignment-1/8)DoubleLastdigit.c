#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number(last digit <5) : ");
	scanf("%d",&num);
	printf("After doubling last digit : %d",(num/10)*10 + 2*num%10);
}