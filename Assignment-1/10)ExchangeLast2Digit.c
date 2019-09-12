#include <stdio.h>
void main(){
	int num = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("After Exchangig last 2 digit : %d",((num/100)*10 + num%10)*10 + (num/10)%10);
}