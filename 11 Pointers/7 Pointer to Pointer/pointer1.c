#include <stdio.h>

int main(){
	int value;
	int *p1;
	int **p2;

	value = 10;

	p1 = &value; // take address of value

	p2 = &p1;    // take address of pointer 1

	printf("Value     : %d\n", value);
	printf("Value *p1 : %d\n", *p1);
	printf("Value *p2 : %d\n", **p2);

	return 0;
}