#include <stdio.h>

int main(){
	int size1 = 9;
	int size2 = 0;

	for (int i = 0; i <= size1; i++){
		for (int j = 0; j <= i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	for (int i = 9; i >= size2; i--){
		for (int k = 0; k <= i; k++){
			printf("%d",k);
		}
		printf("\n");

	}

	printf("\n");
	return 0;
}