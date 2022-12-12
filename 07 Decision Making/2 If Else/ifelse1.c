#include <stdio.h>

int main(){
	int a = 5;
	int b = 10;

	if (a == b) {
		printf("True\n");    // X
	} else {
		printf("False\n");   // Y
	}
	printf("Value a : %d\n",a);
	printf("Value b : %d\n",b);
	return 0;
}