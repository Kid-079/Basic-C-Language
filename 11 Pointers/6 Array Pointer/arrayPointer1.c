#include <stdio.h>

const int MIN = 4;

int main(){
	int value[] = {10,20,30,40,50};
	int i;
	int *pointer[MIN];

	for (i = 0; i < MIN; i++){
		pointer[i] = &value[i]; 
	}

	for (i = 0; i < MIN; i++){
		printf("Address [%d] : %p\n", i, pointer[i]);
		printf("Value   [%d] : %d\n", i, *pointer[i]);
	}
	return 0;
}