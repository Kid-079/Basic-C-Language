#include <stdio.h>

int main(){
	int i;

	for(int i = 0; i <= 9; i++){
		printf("\n");
		for(int j = 0; j <= i; j++){
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}