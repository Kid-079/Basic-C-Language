#include <stdio.h>

int main(){
	FILE *file;
	char string[50];

	file = fopen("/home/user/folder/file.txt", "r");
	fscanf(file, "%s", string);
	printf("1 : %s\n", string);
	
	fgets(string, 50, (FILE *)file);
	printf("2 : %s\n", string);
	
	fgets(string, 50, (FILE *)file);
	printf("3 : %s\n", string);
	
	fclose(file);

	return 0;
}

// r  -> read file
// w  -> write new file
// a  -> append file
// r+ -> read, write file
// w+ -> read, write new file
// a+ -> read, write append file


// rb  -> read binary file
// wb  -> write new binary file
// ab  -> append file
// rb+ -> read, write file
// wb+ -> read, write new file
// ab+ -> read, write append file