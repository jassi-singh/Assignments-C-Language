#include <stdio.h>
void main(){
	for(int r=0;r<10;r++){
		for(int c=0;c<20;c++){
			if(r<2)
				printf("*");
			else if(c>7-r&&c<2*r+4)
					printf("0");
				else
					printf("*");
		}
		printf("\n");
	}
}