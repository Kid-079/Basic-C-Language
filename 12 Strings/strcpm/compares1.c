#include <stdio.h>
#include <string.h>

int main(){
	char string1[10] = "MANGGO";
	char string2[10] = "ABCDEF";
	char string3[10];
	int compares;

	compares = strcmp(string1, string2);
	// printf("String : %d\n", compares);

	if(compares == 0){
		printf("String same\n");
	} else {
		printf("String not same\n");
	}
	return 0;
}

// strcmp -> Compares Two String