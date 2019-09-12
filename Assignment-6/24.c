#include <stdio.h>
int main(){
	for(int i=0;i<7;i++){
		printf("%c",65+i*(i+1)/2);
	}
	return 0;
}