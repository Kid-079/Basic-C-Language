#include <stdio.h>

int main(){
	int value1 = 10;
	int value2 = 20;
	int *pA;
	int *pB;
	int **pC;

	pA = &value1;
	pB = &value2;
	pC = &pB;

	printf("Value     : %d\n", value1);
	printf("Value *   : %d\n", *pA);
	printf("Value **  : %d\n", *pB);
	
	return 0;
}