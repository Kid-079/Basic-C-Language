#include <stdio.h>
#include <string.h>

union dataType1{
	int a;                   
	float b;             
	char string[10];   // 1111 1111 1111
}file1;


struct dataType2{
	int a;             // 1111
	float b;           // 1111
	char string[10];   // 1111 1111 1111
}file2;


int main(){

	printf("Memory Size : %ld\n", sizeof(file1));
	printf("Memory Size : %ld\n", sizeof(file2));
	
	return 0;
}


