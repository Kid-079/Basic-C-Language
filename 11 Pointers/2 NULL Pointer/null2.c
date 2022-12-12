#include <stdio.h>

int main(){
	int a = 10;
	int *p;

	p = &a;

	printf("Address Pointer : %p\n", &a);
	printf("Value Pointer   :  %d\n", *p);

	return 0;
}
