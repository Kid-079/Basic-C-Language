#include <stdio.h>
#include <string.h>

int main(){
	char string[10] = "SE";

	string[0] = 'C';
	string[1] = 'H';
	string[2] = 'E';
	string[3] = 'C';
	string[4] = 'K';

	printf("--> %s <--\n", string);

	return 0;
}
