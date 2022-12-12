#include <stdio.h>

typedef int newInteger;

int main(){
	newInteger a = 10;

	printf("Memory Size   : %ld Byte\n", sizeof(a));
	
	printf("Value Integer : %d\n", a);
	
	return 0;
}