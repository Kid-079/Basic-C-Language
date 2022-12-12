#include <stdio.h>

typedef int newInteger;

int main(){
	newInteger a = 10;
	
	typedef newInteger integer;
	integer b;
	b = 20;

	printf("Value Integer : %d\n", a);
	printf("Value Integer : %d\n", b);
	
	return 0;
}