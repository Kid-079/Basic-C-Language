#include <stdio.h>

int main()
{
	static int a; // not initialized
	int b;        // not initialized

	printf("%d\n%d\n", a, b);

	return 0;
}