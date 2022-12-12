#include <stdio.h>

int main(){
	FILE *file;
	char string[20];

	file = fopen("/home/user/folder/file.txt","w");

	printf("Enter Value : ");
	scanf("%s", string);

	fprintf(file, "%s\n", string);
	fclose(file);

	return 0;
}