#include <stdio.h>

const int MIN = 2;

int main(){
	int value[] = {10,20,30,40,50};
	int i;
	int *pA;

	pA = value;

	for (i = 0; i < MIN; i++){	

		printf("Address A [%d] : %p\n", i, pA);
		printf("Value   A [%d] : %d\n", i, *pA);
			
		pA++;
	}
	return 0;
}