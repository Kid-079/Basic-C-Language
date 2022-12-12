#include <stdio.h>

int main()
{
	int a = 5;
	char b = 'a';

	void *p = &a; // void pointer holds address of int a
	p = &b;       // void pointer holds address of char b

	printf("%p\n", &a);
	printf("%p\n", &b);
		
	return 0;
}