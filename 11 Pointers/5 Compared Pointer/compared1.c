#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int *pA;
	int *pB;

	pA = &a;
	pB = &b;

	printf("Value A : %d\n", *pA);
	printf("Value B : %d\n", *pB);

	if (pA < pB){
		printf("A less than B\n");
	} else {
		printf("A greater than B\n");
	}
	return 0;
}