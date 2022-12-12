#include <stdio.h>

int main(){
	int a = 10;
	int b;

	b = a;
	printf("Value : %d\n",b);
	b += a;
	printf("Value : %d\n",b);
	b -= a;
	printf("Value : %d\n",b);
	b *= a;
	printf("Value : %d\n",b);
	b /= a;
	printf("Value : %d\n",b);
	b = 100;
	b %= a; 
	printf("Value : %d\n",b);
	b <<= 1; 
	printf("Value : %d\n",b);
	b >>= 1; 
	printf("Value : %d\n",b);
	return 0;
}