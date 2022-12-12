#include <stdio.h>

int aFunction1(); // Decalaration Function
int aFunction2(); // Decalaration Function
int aFunction3(); // Decalaration Function

int main(){	
	
	int A = aFunction1(10, 20);
	int B = aFunction2(10, 20);
	int C = aFunction3(10, 20);

	printf("Value 1 : %d\n", A);
	printf("Value 2 : %d\n", B);
	printf("Value 3 : %d\n", C);
	return 0;
}

int aFunction1(int a, int b){
	return a + b;
}

int aFunction2(int a, int b){
	return a - b;
}

int aFunction3(int a, int b){
	return a * b;
}

