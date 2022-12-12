#include <stdio.h>

void change (int *x, int *y){
	int temp;

	temp = *x;   // Save value Address x
	*x = *y;     // put y into x
	*y = temp;   // put x into y

	return;
}

int main(){
	int a = 10;
	int b = 20;

	printf("No Change\n");
	printf("Value a : %d\n", a);
	printf("Value b : %d\n", b);
	printf("\n");

	change(&a, &b);

	printf("Change\n");
	printf("Value a : %d\n", a);
	printf("Value b : %d\n", b);
	return 0;
}