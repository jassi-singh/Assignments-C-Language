#include <stdio.h>
int main(){
	int row,j;
	printf("Enter number of rows ");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
	    j=0;
		for(int k=0;k<2*row+1;k++){
			if(k>=row-i&&k<=row+i){
				printf("%c ",65+j);
				if(k<(2*row-1)/2+1)
				    j++;
				else
				    j--;
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}