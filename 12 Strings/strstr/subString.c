#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGOES";
	char string2[10] = "GOES";
	char *result;

	result = strstr(string1, string2);

	printf("Result : %s\n", result);

	return 0;
}

// strstr -> Find the first char of substring in a string