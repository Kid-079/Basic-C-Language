#include <stdio.h>

int main(){
	FILE *file;
	char string[10];

	file = fopen("/home/user/folder/files.bin","rb");

	fread(string, sizeof(string), 1, file);

	printf("Value : %s\n", string);
	
	fclose(file);

	return 0;
}