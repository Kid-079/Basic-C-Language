#include <stdio.h>

int aFunction();

int main(){
	int a = 10;
	
	int result = aFunction(a);

	printf("Value %d\n", result);

	return 0;
}

int aFunction(int a, int b){
	if (a > 5){
		return a - 5;
	} else if (a < 5){
		return a + 5;
	} else if (a == 5){
		return a * 5;
	} else {
		return 0;
	}
}