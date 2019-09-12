#include <stdio.h>
void main(){
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			if(i%2==0)
				printf("*");
			else if(i<5)
			    	printf("0");
				 else if(j<4||j>13)
				 	    printf("0");
				 	  else
				 	  	printf("*");
		}
		printf("\n");
	}
}