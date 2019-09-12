#include <stdio.h>
int main(){
	int row;
	printf("Enter value of rows ");
	scanf("%d",&row);
	for(int i =0;i<row;i++){
		for(int k =0;k<(i*(i+1)/2)+1;k++){
			printf("%c",65+k+i);
		}
		printf("\n");
	}
	return 0;
}