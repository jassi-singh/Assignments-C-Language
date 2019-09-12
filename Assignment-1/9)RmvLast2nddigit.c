#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("After removing last 2nd digit : %d",(num/100)*10 + num%10);
}