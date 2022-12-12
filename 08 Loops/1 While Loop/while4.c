#include <stdio.h>

int main(){
	int size = 9;
	int i = 0;

	while (i <= size) {
		printf("\n");
		int j = 0;
		while (j <= i){
			printf("%d", j);
			j = j + 1;
		}
		i = i + 1;
	}
	printf("\n");
	return 0;
}