#include <stdio.h>

int count(int a, int b){
	return a + b;
}

int main(){
	int A = count(20,80);

	int B = A - 50;
	
	printf("Total : %d\n", B);
	return 0;
}