#include <stdio.h>
#include <string.h>

int main(){
	char string[10] = "CCC";

	string[0] = 'S';
	string[1] = 'E';
	string[2] = 'T';

	printf("--> %s <--\n", string);

	return 0;
}
