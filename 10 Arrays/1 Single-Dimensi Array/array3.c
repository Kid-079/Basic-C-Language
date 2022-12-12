#include <stdio.h>

int main(){
	int value[] = {10,20,30,40};
	int i;

	for (i = 0; i < 4; i++){
		printf("Index [%d] : %d\n", i, value[i]);
	}

	return 0;
}