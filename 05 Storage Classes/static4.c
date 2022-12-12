#include <stdio.h>

void fantastis();
static int a = 5;

void fantastis(){
	static int b = 5;
	b++;
	printf("a : %d\nb : %d\n", a, b);
}

int main()
{
	fantastis();

	return 0;
}