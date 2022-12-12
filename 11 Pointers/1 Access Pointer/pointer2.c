#include <stdio.h>

int main(){
	int a = 10;
	int *p;

	p = &a;

	printf("Address Variable A : %p\n", &a);
	printf("Address Pointer  A : %p\n", &a);
	printf("Value Pointer      : %d\n", *p);

	return 0;
}