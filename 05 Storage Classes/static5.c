#include <stdio.h>

void fantastis();
static int a = 4;

void fantastis(){
	static int b = 4;
	b++;
	printf("a : %d b : %d\n", a, b);
}

int main()
{
	while (a--) {
		fantastis();
	}

	return 0;
}