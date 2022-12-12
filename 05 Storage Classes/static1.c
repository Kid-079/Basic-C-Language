#include <stdio.h>

int fantastis() {
	static int a = 1;
	a++;
	return a; 
}

int main()
{
	printf("%d\n", fantastis());
	printf("%d\n", fantastis());
	printf("%d\n", fantastis());
	return 0;
}