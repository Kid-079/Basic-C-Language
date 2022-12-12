#include <stdio.h>

int main(){
	int value[5];
	int i;

	printf("Enter Value : \n");

	for (i = 0; i < 5; i++){
		scanf("%d", &value[i + 1]);
	}

	printf("Value : \n");
	for (i = 0; i < 5; i++){
		printf("%d\n", value[i]);
	}
	
	return 0;
}