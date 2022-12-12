#include <stdio.h>
#include <string.h>

struct {
	unsigned int a;      
	unsigned int b;
} file1;

struct {
	unsigned int a : 10;     
	unsigned int b : 20;    // require 4 bytes memory space,  but only 2 bits will be used.
} file2;

int main(){

	printf("Memory Size File 1 : %ld Byte\n", sizeof(file1));
	printf("Memory Size File 2 : %ld Byte\n", sizeof(file2));

	return 0;
}