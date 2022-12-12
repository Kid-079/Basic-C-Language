#include <stdio.h>
#include <string.h>

int main(){
	char *string1 = "MANGGO";
	char *string2;

	string2 = strdup(string1);
	
	printf("String : %s\n", string2);

	return 0;
}

// strdup -> Duplicate String