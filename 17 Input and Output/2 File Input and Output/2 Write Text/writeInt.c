#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *file;
	int a;

	file = fopen("/home/user/folder/file.txt","r");

	printf("Enter Value : ");
	scanf("%d", &a);

	fprintf(file, "%d\n", a);
	fclose(file);

	return 0;
}