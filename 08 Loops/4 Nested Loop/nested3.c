#include <stdio.h>

int main(){
	int i;
	int j;

	for (int i = 0; i <=8; i++){
		printf("\n");
		for (int j = 0; j <= i; j++){
			printf("*%c",i);
		}
	}
	printf("\n");
	return 0;
}