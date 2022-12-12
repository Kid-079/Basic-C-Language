#include <stdio.h>
#include <string.h>

struct {
	unsigned int a : 2;  // 2 Bit
} file1;

struct {
	unsigned int a : 6;  // 6 Bit
} file2;

struct {
	int a : 10;          // 10 Bit
} file3;

int main(){

	printf("Memory Size : %ld Byte\n", sizeof(file1));
	printf("Memory Size : %ld Byte\n", sizeof(file2));
	printf("Memory Size : %ld Byte\n", sizeof(file3));
	printf("\n");

	file1.a = 3;
	printf("Value       : %d\n", file1.a);
	
	file2.a = 63;
	printf("Value       : %d\n", file2.a);

	file3.a = 1023;
	printf("Value       : %d\n", file3.a);
	
	return 0;
}