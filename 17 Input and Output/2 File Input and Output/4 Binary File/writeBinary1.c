#include <stdio.h>

struct Texture {
	int a;
	int b;
	int c;
};

int main(){
	
	int value;
	struct Texture text;
	FILE *file;

	file = fopen("/home/user/folder/emptyFile.bin","wb");

	fwrite(&text, sizeof(struct Texture), 1, file);

	fclose(file);
	
	return 0;
}