#include <stdio.h>

int main(){
	int a = 5;
	int b = 10;

	if (a == 5){
		if (b == 10) {
			printf("Very Good\n");
		} else if (b >= 5) {
			printf("Good\n");
		} else {
			printf("Try Again\n");
		}
	}

	printf("Value a : %d\n",a);
	printf("Value b : %d\n",b);
	return 0;
}