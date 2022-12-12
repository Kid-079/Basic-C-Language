#include <stdio.h>
#include <stdlib.h>

struct Numbers {
	int a;   // 4 Byte
	int b;   // 4 Byte
	int c;   // 4 Byte
};

int main(){
	
	int value;
	struct Numbers number;
	FILE *file;

	file = fopen("/home/user/folder/file.bin","wb");
	
	if (file == NULL){
		printf("EROR");
		exit(1);
	}

	for(value = 1; value < 5; value++){
		number.a = value;
		number.b = 5*value;
		number.c = 5*value + 1;

		fwrite(&number, sizeof(struct Numbers), 1, file);
	}

	fclose(file);
	
	return 0;
}