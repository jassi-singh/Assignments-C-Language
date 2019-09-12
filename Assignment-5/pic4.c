#include <stdio.h>
void main(){
	int i,num;
	printf("Enter number of rows ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(int k = 0;k<2;k++){
			if(i%2 == 0)
				printf("*00*0**00**0*00");
			else 
				printf("000000000000000");
		}
		printf("\n");
	}
}