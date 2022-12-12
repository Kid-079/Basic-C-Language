#include <stdio.h>

// const int pointer = 5;

int main(){
	int A[5] = {10,20,30,40,50};
	int i;
	int *p;

	p = A;

	for (i = 0; i < 5; i++){
		printf("Address A [%d] : %p\n", i, p);
		printf("Value   A [%d] : %d\n", i, *p);

		p++;
	}


	return 0;
}