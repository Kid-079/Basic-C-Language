#include <stdio.h>
#include <string.h>

union dataType1{
	int a;                   
	float b;             
	char string[10]; 
}file1;

int main(){

	printf("Memory Size : %ld\n", sizeof(file1));
	printf("Memory Size : %ld\n", sizeof(file2));

	return 0;
}


