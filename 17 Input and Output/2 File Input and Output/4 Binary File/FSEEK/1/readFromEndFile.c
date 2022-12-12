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

	file = fopen("/home/user/folder/file5.bin","rb");
	
	if (file == NULL){
		printf("EROR");
		exit(1);
	}

	fseek(file, -sizeof(struct Numbers), SEEK_END);

	for(value = 1; value < 5; value++){		
		fread(&number, sizeof(struct Numbers), 1, file);
		printf("Value A : %d\n", number.a);
		printf("Value B : %d\n", number.b);
		printf("Value C : %d\n", number.c);
		fseek(file, -2*sizeof(struct Numbers), SEEK_CUR);
	}

	fclose(file);
	
	return 0;
}


// SEEK_SET -> start offset from the beginning of file
// SEEK_END -> start offset from the end of file
// SEEK_CUR -> start offset from current location of the cursor in the file

