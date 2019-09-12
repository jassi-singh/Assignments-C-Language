#include <stdio.h>
int main(){
	for(int i =0,j=0;i<6;i++){
		for(int k =0;k<=i;k++,j++){
			printf("%c",65+j);
		}
		printf("\n");
	}
	return 0;
}