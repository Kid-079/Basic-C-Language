#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "ABCDE";
	char string2[10] = "MANGGO";
	char string3[10];
	int length;

	strcpy(string2, string1);         // Copy String1 into String2
	printf("String : %s\n", string2);

	strcat(string1, string2);         // Concatenate 
	printf("Concatenate : %s\n", string1);
	
	length = strlen(string1);         // Return length string1
	printf("Length : %d\n", length);

	return 0;
}