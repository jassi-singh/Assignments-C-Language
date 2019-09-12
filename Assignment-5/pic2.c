#include <stdio.h>
void main(){
	for(int i = 0;i<10;i++){
		if(i<3){
			for(int k =0;k<20;k++){
				if(k<8)
					printf("0");
				else
					printf("*");
			}
			printf("\n");
		}
		if(i>=3&&i<7){
			for(int k =0;k<20;k++){
				printf("*");
			}
			printf("\n");
		}
		if(i>=7){
			for(int k =0;k<20;k++){
				if(k>=8)
					printf("0");
				else
					printf("*");
			}
			printf("\n");
		}

	}
}