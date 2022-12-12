#include <stdio.h>

int main(){
	int a = 10;
	char b = 'a';
	int value1;
	int value2;

	value1 = (char) a + b;
	value2 = (char) value1 + 4;

	printf("Value : %c\n", value1);
	printf("Value : %c\n", value2);

	return 0;
}