#include <stdio.h>
// #include <stdlib.h>

int main(){

	char string[20];

	FILE *file;
	file = fopen("/home/user/folder/eror.txt","r");
	
	fgets(string, 20, file);
	printf("Value : %s", string);
	
	fclose(file);

	return 0;
}