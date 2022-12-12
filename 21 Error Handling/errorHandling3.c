#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 5;
	int value;

	if (a == 0){
		fprintf(stderr, "Value A is zero! Exit File...\n");
		exit(2);
	} else if (b == 0){
		fprintf(stderr, "Value B is zero! Exit File...\n");
		exit(2);
	}

	value = a / b;
	fprintf(stderr, "Value : %d\n", value);

	exit(0);

	return 0;
}


/*

stdin  -> Value 0
stdout -> Value 1
stderr -> Value 2

EXIT_SUCCESS -> Value 0
EXIT_FAILURE -> Value -1

*/