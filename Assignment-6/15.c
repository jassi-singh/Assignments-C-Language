#include <stdio.h>
void main(){
	for(int i =0;i<6;i++){
		for(int k=0;k<i+1;k++){
			printf("%c",65+k+i);
		}
		printf("\n");
	}
}