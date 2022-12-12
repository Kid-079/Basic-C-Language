#include <stdio.h>

#define address(a) printf ("Address" #a " = %d\n ", address##a);

int main(){
	int address50 = 10;

	address(50);

	return 0;
}