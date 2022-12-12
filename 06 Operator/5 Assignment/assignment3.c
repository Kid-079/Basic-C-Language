#include <stdio.h>

int main(){
	int a = 19;
	int b;

	b = a;
	printf("Value 1: %d\n",b);
	b += a;
	printf("Value 2: %d\n",b);
	b -= a;
	printf("Value 3: %d\n",b);
	b *= a;
	printf("Value 4: %d\n",b);
	b /= a;
	printf("Value 5: %d\n",b);
	b = 100;
	b %= a; 
	printf("Value 6: %d\n",b);
	b <<= 2; // Left Shift AND Assignment Operator
	printf("Value 7: %d\n",b);
	b >>= 4; // Right Shift AND Assignment Operator
	printf("Value 8: %d\n",b);
	b &= 1; // Bitwise AND Assignment Operator
	printf("Value 9: %d\n",b);
	return 0;
}