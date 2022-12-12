#include <stdio.h>

int main(){
	int value[5];
	int i;
	int j;

	for (i = 0; i < 5; i++){
		value[i] = i + 50;
	}

	for (j = 0; j < 5; j++){
		printf("Index[%d] : %d\n", j, value[j]);
	}


	return 0;
}