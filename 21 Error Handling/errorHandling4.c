#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	int b = 2;
	int value;

	if (a == 0){
		fprintf(stderr, "Value A is Zero.!! Exit File...\n");
		exit(EXIT_FAILURE);
	} else if (b == 0){
		fprintf(stderr, "Value B is Zero.!! Exit File...\n");
		exit(EXIT_FAILURE);
	}

	value = a / b;
	fprintf(stderr, "Value : %d\n", value);

	return 0;
}