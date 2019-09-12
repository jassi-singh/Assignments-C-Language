#include <stdio.h>
void main(){
	int i = 0,num;
	printf("Enter range (>90) ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		if(i<20 || (i>50 && i<70) || i>90)
			printf("%d ",i);
	}
}