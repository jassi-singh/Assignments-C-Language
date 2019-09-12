#include <stdio.h>
void main(){
	int i;
	for(i=0;i<11;i++){
		for(int j=0;j<17;j++){
			if(i==0||i==10){
				printf("0");
			}
			if(i==1||i==9){
				if(j<6||j>10)
					printf("0");
				else 
					printf("*");
			}
			if(i==2||i==8){
				if(j<4||j>12)
					printf("0");
				else 
					printf("*");
			}			
			if(i==3||i==7){
				if(j<3||j>13)
					printf("0");
				else 
					printf("*");
			}
			if(i>3&&i<7){
				if(j<2||j>14)
					printf("0");
				else 
					printf("*");
			}	
		}
		printf("\n");
	}
}