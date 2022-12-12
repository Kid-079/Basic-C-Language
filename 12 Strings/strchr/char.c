#include <stdio.h>
#include <string.h>

int main(){
	char string[10] = "MANGGOES";
	char a = 'O';
	char *result;

	result = strchr(string, a);

	printf("String : %s\n", string);
	printf("Result : %s\n", result);

	return 0;
}

// strchr -> Find single char in a string