#include <stdio.h>

int fantastis() {
	int a = 5;
	a++;
	return a; 
}

int main()
{
	printf("%d\n", fantastis());
	printf("%d\n", fantastis());
	return 0;
}