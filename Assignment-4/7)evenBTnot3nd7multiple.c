#include <stdio.h>
void main(){
	int num;
	printf("enter range");
	scanf(" %d",&num);
	for(int i =0;i<num;i++){
		if(i%3 != 0 && i%5 != 0)
			printf("%d ",i);
	}
}