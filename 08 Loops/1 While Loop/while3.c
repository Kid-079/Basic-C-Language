#include <stdio.h>

int main(){
	int a = 0;

	while (a < 10) {
		printf("Value a : %d\n", a);
		a++;
		if (a == 5) {
			printf("Wonderful\n");
			break;
		}
	}
	return 0;
}