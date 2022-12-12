#include <stdio.h>

int main(){
	FILE *file;
	char string[20];

	file = fopen("/home/user/folder/secret.txt","r");

	if (file == NULL){
	 printf("File Not Found\n");
	 return(1);
	}

	if (fgets(string,20,file) != NULL){
		puts(string);
	}

	fclose(file);
	
	return 0;
}