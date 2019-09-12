#include <stdio.h>
void main(){
	int  num=100;
	printf("Enter range ");
	// scanf("%d",&num);
	printf("Number divided by 3 & 5 but not by both---");
	for(int i=0;i<num;i++){
		if(i%15 != 0 && (i%3==0 || i%5==0)){
			printf("%d  ",i);
		}
	}
}