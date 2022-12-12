#include <stdio.h>
#include <string.h>

union dataType{
	int a;
	float b;
	char string[10];
};

int main(){

	union dataType file;

	file.a = 10;
	printf("Integer A : %d\n", file.a);
	
	file.b = 2,5;
	printf("Float   B : %f\n", file.b);
	
	strcpy(file.string, "ABCDE");
	printf("String    : %s\n", file.string);

	return 0;
}