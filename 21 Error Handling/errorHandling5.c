#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 8;
	float value;

	if (a %2 == 1){
		fprintf(stderr, "A mod 2 is not Zero.!! Exit File\n");
		exit(-1);
	} else if  (b %2 == 1) {
		fprintf(stderr, "B mod 2 is not Zero.!! Exit File\n");
		exit(-1);
	}

	value = (float) a / b;
	fprintf(stderr, "Value : %f\n", value);

	return 0;
}