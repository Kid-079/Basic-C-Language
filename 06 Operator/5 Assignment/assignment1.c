#include <stdio.h>

int main(){
	int a = 10;
	int b;

	b = a;
	printf("Value : %d\n",b);
	b *= a;
	printf("Value : %d\n",b);
	// b = 101;
	b %= a;
	printf("Value : %d\n", b);
	return 0;
}