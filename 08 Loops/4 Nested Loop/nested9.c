#include <stdio.h>

int main(){
	int a = 8;
	int b = 9;

	for (int i = 0; i < b; i++){
		for (int j = 0; j < a; j++){
			printf(" %c", j);
		}
		for (int j = 0; j <= i; j++){
			printf("%d", j);
		}


		for (int j = 0; j < 0; j++){
			printf(" %c", j);
		}
		for (int j = 0; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
		a--;
	}
}