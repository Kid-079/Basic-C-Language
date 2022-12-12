#include <stdio.h>

int main() {

	int a;
	int b;

	if (a && b) {
		printf("True\n");
	} else if (!(a || b)) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	return  0;
}