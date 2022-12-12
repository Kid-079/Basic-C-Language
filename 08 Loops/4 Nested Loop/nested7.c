#include <stdio.h>

int main(){
	int a = 0;
	int b = 9;

	for (int i = b; i > 0; i--){
		for (int j = 0; j < a; j++){
			printf(" %c", j);
		}
		for (int j = 0; j < i; j++){
			printf("%d",j);
		}
		printf("\n");
		a++;
	}

	return 0;
}