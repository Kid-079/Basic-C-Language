#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int c;

	if (!((a && b) && (a && b))) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}