#include <stdio.h>
void main(){
	for(int i =0;i<6;i++){
		for(int k=0;k<6;k++){
			if(k<i)
				printf(" ");
			else
			printf("%c",65+k);
		}
		printf("\n");
	}
}