#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("last 2nd digit : %d",(num/10)%10);
}