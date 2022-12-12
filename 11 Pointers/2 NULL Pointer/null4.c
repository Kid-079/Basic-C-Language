#include <stdio.h>

int main(){
	int *p = NULL;
	int a = 10;

	p = &a;

	printf("Address Pointer : %p\n", &p);

	if (p){
		printf("Pointer is not null\n");
	} else {
		printf("Pointer is null\n");
	}

	return 0;
}