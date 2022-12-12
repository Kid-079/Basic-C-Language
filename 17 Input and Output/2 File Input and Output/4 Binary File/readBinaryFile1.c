#include <stdio.h>
#include <stdlib.h>

struct Numbers {
	int a;
	int b;
	int c;
};

int main(){
	
	int value;
	struct Numbers number;
	FILE *file;

	file = fopen("/home/user/folder/emptyFile.bin","rb");
	
	if (file == NULL){
		printf("EROR");
		exit(1);
	}

	for(value = 1; value < 5; value++){		
		fread(&number, sizeof(struct Numbers), 1, file);
		printf("Value A : %d\n", number.a);
		printf("Value B : %d\n", number.b);
		printf("Value C : %d\n", number.c);
	}

	fclose(file);
	
	return 0;
}