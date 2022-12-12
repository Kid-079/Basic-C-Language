#include <stdio.h>


int main(){
	
	int aFunction1(); // Decalaration Function

	
	int A = aFunction1(10, 20);

	printf("Value : %d\n", A);
	return 0;
}

int aFunction1(int a, int b){
	return a + b;
}
