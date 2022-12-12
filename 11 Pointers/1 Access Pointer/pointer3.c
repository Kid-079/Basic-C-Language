#include <stdio.h>

int main(){
	int a  = 10;
	char b = {'A'};
	int *pA;
	char *pB;

	pA = &a;
	pB = &b;

	printf("Address Variable A : %p\n", &a);
	printf("Address Pointer  A : %p\n", &a);
	printf("Value Pointer      : %d\n", *pA);
	printf("\n");
	printf("Address Pointer  B : %p\n", &b);
	printf("Address Pointer  B : %p\n", &b);
	printf("Value Pointer      : %c\n", *pB);
	
	return 0;
}