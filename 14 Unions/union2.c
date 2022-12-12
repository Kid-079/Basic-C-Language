#include <stdio.h>
#include <string.h>

union dataType{
	int a;
	float b;
	double c;
	char string[10];
};

int main(){
	union dataType file;

	printf("Memory Size : %ld\n", sizeof(file));

	return 0; 
}