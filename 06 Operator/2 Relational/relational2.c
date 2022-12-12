#include <stdio.h>

int main(){
	int a = 8;
	int b = 8;

	if ( a < b) {
		printf("A less than B\n");
	} else if ( a > b ){
		printf("A greater than B\n");
	} else {
		printf("A equal B\n");
	}

	return 0;
}