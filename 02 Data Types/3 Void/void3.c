#include <stdio.h>

int main()
{
	int a = 5;
	char b = 'B';

	void *pA = &a;
	void *pB = &b;

	printf("%d\n", *(int *)pA);    // value of int
	printf("%d\n", *(char *)pB);   // value of char

	return 0;
}