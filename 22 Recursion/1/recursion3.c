#include <stdio.h>

int value(int a){
	if (a <= 1){
		return 1;
	}
	return a * value(a - 2);
}

int main(){
	int a = 5;
	int b = 20;
	int total;

	total = value(a) * b;


	printf("Value : %d\n", total);
	return 0;
}