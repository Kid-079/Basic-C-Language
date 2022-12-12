#include <stdio.h>

int main(){
	int a = 0;

	for (int a = 0; a < 10; a++){
		printf("Value a : %d\n", a);
		if (a == 5){
			printf("Wonderful\n");
			continue;
		}
	}
	return 0;
}