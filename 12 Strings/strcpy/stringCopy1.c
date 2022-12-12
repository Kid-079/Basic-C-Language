#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGO";
	char string2[10] = "ABCDE";
	char string3[10];
	int length;

	strcpy(string2, string1);         // Copy String1 into String2
	printf("String : %s\n", string2);

	return 0;
}

// strcpy -> copy one string to another