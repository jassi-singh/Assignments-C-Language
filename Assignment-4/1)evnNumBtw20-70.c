#include <stdio.h>
void main(){
	int i=21;
	while(i>20&&i<70){
		if(i%2 == 0){
			printf("%d\n",i);
		}
		i++;
	}
}