#include <stdio.h>

int main(){
	int value[5] = {10,20,30,40,50};
	int *p;
	int i;

	p = value;

	printf("Value A : \n");
	for (i = 0; i < 5; i++){
		printf("*(p + %d) : %d\n", i, *(p + i));
	}
	
	printf("Value B : \n");
	for (i = 0; i < 5; i++){
		printf("*(value + %d) : %d\n", i, *(value + i));
	}
	
	return 0;
}