#include <stdio.h>

int a;
extern void fantastis();

int main()
{
	fantastis();
	return 0;
}

// Compile -> gcc extern1.c extern2.c -o extern