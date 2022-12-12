#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGO";
	char string2[10] = "ABCDE";
	char string3[10];
	int length;

	strcat(string1, string2);          // Concatenate
	printf("String : %s\n", string1);

	length = strlen(string1);          // Length string
	printf("Length : %d\n", length);

	printf("Size : %ld\n", sizeof(string1));

	return 0;
}


// strcat -> Appends one string to another