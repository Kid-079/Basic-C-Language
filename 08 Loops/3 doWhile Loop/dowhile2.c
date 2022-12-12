#include <stdio.h>

int main(){
	int a = 0;

	do {
		printf("Value a : %d\n",a);
		a = a + 1;
		if (a == 5){
			printf("Excellent\n");
			continue;
		}
	} while (a < 10);
	return 0;
}