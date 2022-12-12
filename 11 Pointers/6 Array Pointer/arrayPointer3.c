#include <stdio.h>

const int MIN = 3;

int main(){
	char *list[] = {
		"Stamina",
		"Acceleration",
		"Heading"
	};

	int i = 0;
	for (i = 0; i < MIN; i++){
		printf("List [%d] : %s\n", i, list[i]);
	}
	return 0;
}