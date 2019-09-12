#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Sum of last 2 digits : %d",num%10 + (num/10)%10);
}