#include <stdio.h>

int min(int num1, int num2){
	int value;

	if (num1 < num2){
		value = num1;
	} else {
		value = num2;
	}

	return value;
}


int main(){
	int a = 50;
	int b = 20;
	int c;

	c = min(a, b);
	printf("Value Min : %d\n", c);

	return 0;
}