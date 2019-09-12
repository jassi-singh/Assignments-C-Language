#include <stdio.h>
void main(){
	int i,num;
	printf("Enter number of rows ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(int k = 0;k<20;k++){
			if(i%2 == 0){
			    if(k%5==0)
				printf("*");
				else 
				printf("0");
			}else if(k%5 == 0)
			        printf("0");
			    	else 
			    	printf("*");
		}
		printf("\n");
	}
}