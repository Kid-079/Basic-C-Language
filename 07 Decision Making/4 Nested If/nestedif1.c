#include <stdio.h>

int main(){
	int a = 4;
	int b = 8;

	if (a == 5){
		if (b == 10) {			
			printf("OK\n");
		}
		printf("A\n");
	}

	printf("Value a : %d\n",a);
	printf("Value b : %d\n",b);

	return 0;
}