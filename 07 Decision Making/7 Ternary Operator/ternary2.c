#include <stdio.h>

int main(){
	int a = 10;
	int b = 9;

	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	(a == b) ? printf("%d = %d\n", a, b) 
	: (a < b) ? printf("%d < %d\n", a, b)
			 : printf("%d > %d\n", a, b);

	return 0;
}

// result = a > b ? x : y;
// a == x ? : y;
// a == x ? (a == x) : y;