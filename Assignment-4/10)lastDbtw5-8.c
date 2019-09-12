#include <stdio.h>
void main(){
	int num;
	printf("enter range ");
	scanf("%d",&num);
	printf("Number whose last digit is b/w 5 and 6---");
	for (int i=0;i<num;i++){
		if(i%10 >=5 && i%10 <=8){
			printf("%d  ",i);
		}
	}
}