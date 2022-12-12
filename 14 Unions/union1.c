#include <stdio.h>
#include <string.h>

union dataType{
	int a;   
	char b;  
};

int main(){
	union dataType file;

	printf("Memory Size : %ld\n", sizeof(file));

	return 0; 
}