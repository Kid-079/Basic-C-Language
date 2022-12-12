#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGO";
	char string2[10] = "MANGGO";
	char string3[10];
	int compares;

	compares = strcmp(string1, string2);

	if (compares == 0){
		printf("String Same\n");
	} else {
		printf("String not Same\n");
	}

	return 0;
}