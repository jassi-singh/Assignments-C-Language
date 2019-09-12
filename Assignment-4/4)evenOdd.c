#include <stdio.h>
void main(){
	int i=0;
	printf("even numbers btw [0,40]---");
	for(i=0;i<40;i+=2){
		printf("%d ",i);
	}
	printf("\nodd numbers [50,80]---");
	for(i=51;i<=80;i+=2){
		printf("%d ",i);
	}
}