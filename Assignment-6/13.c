#include <stdio.h>
void main(){
	for(int i =0;i<5;i++){
		for(int k=0;k<6;k++){
			if(k<=i)
				printf("%c",97+k);
			else
				printf("%c",65+k);
		}
		printf("\n");
	}
}