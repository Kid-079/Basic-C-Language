#include <stdio.h>

int main()
{
	int a[2] = {1,5};
	void *p = &a;
	p = p + sizeof(int);

	printf("%d\n", *(int *)p);

	return 0;
}