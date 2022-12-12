#include <stdio.h>

int main(){
	FILE *file;
	int a;
	
	file = fopen("/home/user/folder/files.txt","w+");
	fputs("ABCDE",file);

	fseek(file, 3, SEEK_SET);
	fputs("FGHI",file);
	fclose(file);

	return 0;
}