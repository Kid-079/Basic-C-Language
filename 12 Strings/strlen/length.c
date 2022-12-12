#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGO";
	int length;

	length = strlen(string1);        
	printf("String Length : %d\n", length);

	printf("Size : %ld\n", sizeof(string1));

	return 0;
}

// strlen -> Return length of string