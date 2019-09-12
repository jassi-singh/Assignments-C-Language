#include <stdio.h>
void main(){
	int i=0;
	printf("even numbers btw [0,50)---");
	for(i=0;i<50;i+=2){
		printf("%d ",i);
	}
	printf("\nodd numbers [50,100]---");
	for(i=51;i<=100;i+=2){
		printf("%d ",i);
	}
}