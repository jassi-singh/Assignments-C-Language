#include <stdio.h>
void main(){
	for(int i =0;i<6;i++){
		for(int k=0;k<6-i;k++){
			for(int j=0;j<=i;j++){
				printf("%c",65+k+i);
			}
		}
		printf("\n");
	}
}