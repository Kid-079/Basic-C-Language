#include <stdio.h>

int main(){
	char string[10] = {'A','B','C','D','E'};
	FILE *file;

	file = fopen("/home/user/folder/files.bin", "wb");

	fwrite(string, sizeof(char), 10, file);
	fclose(file);

	return 0;
}