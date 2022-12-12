#include <stdio.h>

int main(int a, char *b[]){
	if (a == 2){
		printf("Run %s\n", b[1]);
	} else if ( a > 2) {
		printf("Compile \n");
	} else {
		printf("Exit \n");
	} 
	return 0;
}

/*

a ==> argc   -> number of argument passed
b ==> argv[] -> pointer array which point to each argument passed to program

==============================================================================

./command
./command A
./command A B
./command "A B C"

*/