#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *file;
	int a;	

	if ((file = fopen("/home/user/folder/secret.txt","r")) == NULL){
	 printf("File Not Found\n");
	 exit(1);
	}

	fscanf(file, "%d", &a);
	printf("Value : %d", a);

	fclose(file);
	
	return 0;
}