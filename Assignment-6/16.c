#include <stdio.h>
void main(){
	for(int i =0;i<6;i++){
		for(int k=0;k<6-i;k++)
			printf("%c",65+i*k+k);
		printf("\n");
	}
}