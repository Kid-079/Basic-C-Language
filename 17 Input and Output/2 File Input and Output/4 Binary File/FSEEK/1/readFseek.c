#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("/home/user/folder/file5.bin","rb");

	fseek(file, 0, SEEK_END);

	printf("%d\n", file);

	return 0;
}


// SEEK_SET -> start offset from the beginning of file
// SEEK_END -> start offset from the end of file
// SEEK_CUR -> start offset from current location of the cursor in the file
