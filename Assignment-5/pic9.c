#include <stdio.h>
void main(){
	for(int r=0;r<9;r++){
		for(int c=0;c<20;c++){
			if(r<3)
				printf("*");
			else if(c>7-r&&c<4+r)
					printf("0");
				else
					printf("*");
		}
		printf("\n");
	}
}