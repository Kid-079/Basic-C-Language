#include <stdio.h>

int main(){
	int *p = NULL;

	printf("Address Pointer : %p\n", &p);
	printf("Value Pointer   : %d\n", *p);

	return 0;
}