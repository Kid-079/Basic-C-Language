#include <stdio.h>
#define MIN 20

int main(){

	char string[MIN];

	printf("Enter Value : ");
	
	fgets(string, MIN, stdin);   // input from stdin stream
	
	printf("Value : %s\n", string);

	return 0;
}