#include <stdio.h>
void main(){
	int num;
	printf("enter number of rows ");
	scanf("%d",&num);
	for(int i = 0;i<num;i++){
		for(int k =0;k<5;k++){
			if(i%2 == 0)
				printf("*0");
			else
				printf("0*");
			if(k==4)
				printf("\n");
		}
	}
}