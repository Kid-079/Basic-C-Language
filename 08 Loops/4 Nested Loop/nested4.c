#include <stdio.h>

int main(){
	int i = 0;

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 5; j++){
			if (i == 4){
				break;
			}
			printf("*%c",j);
		}
		printf("\n");
	}
	// printf("\n");
	return 0;
}