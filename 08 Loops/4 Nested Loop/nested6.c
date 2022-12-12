#include <stdio.h>

int main(){
	int size1 = 9;
	int size2 = 0;

	for (int i = 9; i >= size2; i--){
		for (int j = 9; j >= i; j--){
			printf("%d",j);
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}