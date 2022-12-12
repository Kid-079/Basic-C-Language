#include <stdio.h>

int main(){
	int *p = NULL;

	printf("Address Pointer : %p\n", &p);

	if (!p){
		printf("Pointer is null\n");
	} else {
		printf("Pointer is not null\n");
	}

	return 0;
}

// p  => pointer not null
// !p => pointer null