#include <stdio.h>
#include <string.h>

struct {
	unsigned int a : 10;   // 10 bit
	unsigned int b : 20;   // 20 bits -> 4 Bytes but only 2 bytes will be used
} file1;

struct {
	signed int a : 10;
	signed int b : 20;     // 20 bits -> 4 Bytes but only 2 bytes will be used
} file2;

struct {
	int a : 10;  
	int b : 20;            // 20 bits -> 4 Bytes but only 2 bytes will be used
}file3;

struct {
	double c;
	float b;
} file4;

int main(){

	file1.a = 1000;       // Value -> 4 bytes will be used
	file2.a = 1000;

	printf("Memory Size : %ld Byte\n", sizeof(file1));
	printf("Memory Size : %ld Byte\n", sizeof(file2));
	printf("Memory Size : %ld Byte\n", sizeof(file3));
	printf("Memory Size : %ld Byte\n", sizeof(file4));

	return 0;
}