#include <stdio.h>
void main(){
	int num;
	printf("Number b/w 10-19, 30-39..... 90-99 ---");
	for (int i=1;i<4;i++){
		for(int k = i*30 - 20;k<30*i;k++){
			if(k%2 ==0)
			printf("%d ",k);
		}
		
	}
}