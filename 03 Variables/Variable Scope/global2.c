#include <stdio.h>

int a;
int b;
int c;
float d;

int main()
{
	a = 5;
	b = 2;
	c = a + b;
	d = a / b;

	printf("Value : %d\n", c); 
	printf("Value : %f\n", d); 

	return 0;
}