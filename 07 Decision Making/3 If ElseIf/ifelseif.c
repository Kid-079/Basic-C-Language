#include <stdio.h>

int main(){
	int a = 5;

	if (a == 20){
		printf("Very Good\n");
	} else if (a >= 15) {
		printf("Good\n");
	} else if (a >= 10) {
		printf("Not Bad\n");
	} else if (a >= 5){
		printf("Bad\n");
	} else {
		printf("Try Again\n");
	}
	printf("Value a : %d\n",a);
	return 0;
}