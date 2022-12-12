#include <stdio.h>

int main()
{
	int a = 5;
	void *p = &a;

	printf("%d\n", *(int *)p);

	return 0;
}