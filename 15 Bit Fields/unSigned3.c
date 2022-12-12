#include <stdio.h>
#include <string.h>

struct {
	unsigned short a;
	unsigned short b;
} file1;

struct {
	unsigned int a;
	unsigned int b;
} file2;

struct {
	unsigned long a;
	unsigned long b;
} file3;

struct {
	int a : 10;
	int b : 20;
}file4;

struct {
	double c;
	float b;
} file5;

int main(){

	file1.a = 1000;
	file2.a = 1000;

	printf("Memory Size : %ld Byte\n", sizeof(file1));
	printf("Memory Size : %ld Byte\n", sizeof(file2));
	printf("Memory Size : %ld Byte\n", sizeof(file3));
	printf("Memory Size : %ld Byte\n", sizeof(file4));
	printf("Memory Size : %ld Byte\n", sizeof(file5));

	return 0;
}