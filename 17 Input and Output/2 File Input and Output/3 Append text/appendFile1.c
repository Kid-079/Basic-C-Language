#include <stdio.h>

int main(){
	FILE *file;

	file = fopen("/home/user/folder/file.txt","a");

	fprintf(file, "this is file\n");
	fputs("this is file 2\n", file);
	fclose(file);


	return 0;
}