#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[20];
	char *type;

	// type = malloc(20 * sizeof(char));	
	
	strcpy(string, "ABCDE");

	if (type == NULL){
		fprintf(stderr, "ERROR.!! DATA DISABLE - allocate memory to access data\n");
		printf("\n");
	} else {
			strcpy(type, "This is Font");
	}

	printf("Name : %s\n", string);
	printf("Type : %s\n", type);

	return 0;
}


/*

1. void *calloc(int value, int size);
   allocates array of value element and size in bytes.
2. void free(void *address);
   release block of memory block specified address
3. void *malloc(int value);
   allocates array of value bytes and initialized
4. void *realloc(void *address, int newsize);
   re-allocates memory extending to newsize

*/