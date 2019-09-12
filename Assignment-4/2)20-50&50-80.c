#include <stdio.h>
void main(){
	int i=20;
	while(i>=20&&i<=40){
		printf("%d ",i);
		i++;
	}
	i=50;
	while(i>=50&&i<=80){
		if(i%2 == 0)
		printf("%d ",i);
		i++;
	}
}