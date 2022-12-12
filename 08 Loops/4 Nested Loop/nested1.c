#include <stdio.h>

int main(){
	int size = 9;

	for(int i = 0; i <= size; i++){
		printf("\n");
		for(int j = 0; j <= i; j++){
			printf("%d", j);
		}
	}
	printf("\n");
	return 0;
}