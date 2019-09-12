#include <stdio.h>
void main(){
	for(int r=0;r<10;r++){
		for(int c=0;c<20;c++){
			if(c>=6-r&&c<11)
				printf("*");
			else if(r<8)
					printf("0");
				else
					printf("*");
		}
		printf("\n");
	}
}