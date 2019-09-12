#include <stdio.h>
int main(){
	int i=0,num;
	printf("Enter number upto which you want multiple");
	scanf("%d",&num);
	printf("number divisble by 3 or 7---");
	for(i =0;i<=num;i++){
		if(i%3 == 0||i%7 ==0)
			printf("%d ",i);
	}
}