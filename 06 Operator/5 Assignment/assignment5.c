#include <stdio.h>

int main(){
	int a = 10;

	a &= 9;
	printf("%d\n", a);
	a ^= 9;
	printf("%d\n", a);
	a |= 9;
	printf("%d\n", a);

	return 0;
}