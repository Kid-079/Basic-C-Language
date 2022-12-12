#include <stdio.h>

int main()
{
	int a = 5;
	char b = 'a';

	void *pA = &a;
	pA = &b;

	printf("%d\n", *(int *)pA);
	
	return 0;
}