#include <stdio.h>

const int MIN = 4;

int main(){
	int value[] = {10,20,30,40,50};
	int i;
	int *pA;

	pA = value;

	for (i = 0; i < MIN; i++){
		if (i == 3) {
			printf("Address A [%d] : %p\n", i, pA);
			printf("Value   A [%d] : %d\n", i, *pA);
			break;
		}		
		pA++;
	}
	return 0;
}