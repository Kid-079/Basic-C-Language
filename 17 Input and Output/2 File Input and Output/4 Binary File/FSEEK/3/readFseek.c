#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("/home/user/folder/file5.txt","r");

	fseek(file, 0, SEEK_END);

	printf("%ld\n", ftell(file));

	return 0;
}