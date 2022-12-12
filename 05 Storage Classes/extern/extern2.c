#include <stdio.h>

extern int a;

int fantastis()
{
	a = 5;
	printf("A : %d\n", a);
	return 0;
}