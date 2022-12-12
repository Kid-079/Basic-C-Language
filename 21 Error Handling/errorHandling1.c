#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(){
	FILE *file;
	int errValue;

	file = fopen("secret.txt","r");

	if (file == NULL){
		errValue = errno;
		fprintf(stderr, "Value error : %d\n", errno);
		perror("[ERROR..!!]");   // perror
	} else {
		fclose(file);
	}
	
	return 0;
}


/*

stdin  -> Value 0
stdout -> Value 1
stderr -> Value 2

EXIT_SUCCESS -> Value 0
EXIT_FAILURE -> Value -1

*/