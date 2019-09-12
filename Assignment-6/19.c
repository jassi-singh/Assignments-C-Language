#include <stdio.h>
int main(){
	int row=6;
	printf("Enter number of rows ");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int k=0;k<row;k++){
			if(k>=row-i-1)
				printf("%c",65+k);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}