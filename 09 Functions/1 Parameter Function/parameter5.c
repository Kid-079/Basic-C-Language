#include <stdio.h>

int count(int a, int b){
	return a + b;
}

int main(){
	int a = 50;
	int b = 50;

	int A = count(a,b);
	
	printf("Value : %d\n", A);

	return 0;
}