#include <stdio.h>
#define MIN 20

int main(){

	FILE *file;
	char string[MIN];

	file = fopen("/home/user/folder/file.txt","r");

	fgets(string, MIN, (FILE *)file);
	printf("Value : %s\n", string);

	return 0;
}