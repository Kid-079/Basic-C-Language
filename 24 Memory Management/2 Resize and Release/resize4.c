#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char string[10];   // Dynamic 
	char *type;        // Static

	strcpy(string, "Navilu");
	
	/* ALLOCATE MEMORY IN ARRAY*/
	type = calloc (10, sizeof(char));
	if (type == NULL){
		fprintf(stderr, "ERROR.! DATA DISABLE - allocate memory to access data\n");
	} else {
		strcpy(type, "Font");
	}

	printf("Name         : %s\n", string);
	printf("Type         : %s\n", type);
	printf("Address Name : %p\n", string);
	printf("Address Type : %p\n", type);
	printf("Size Name    : %ld Byte\n", sizeof(string));
	printf("Size Type    : %ld Byte\n", sizeof(type));

	/* RELEASE MEMORY */
	free (type);   // Help reduce memory wasted

	return 0;
}


/*

1. void *calloc(int value, int size);
   allocates array of value element and size in bytes.
      int *p;
      p = (int*) calloc(10,sizeof(int))

2. void free(void *address);
   release block of memory block specified address
		int *p;
      p = (int*) malloc(10 * sizeof(int));
      free (p);

3. void *malloc(int value);
   allocates array of value bytes and initialized
   	int *p;
      p = (int*) malloc(10 * sizeof(int));

4. void *realloc(void *address, int newsize);
   re-allocates memory extending to newsize
   	int *p;
      p = (int*) malloc(10 * sizeof(int));
      p = realloc(p, 20 * sizeof(int));

*/