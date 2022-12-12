#include <stdio.h>

int count1(int a, int b, int c){
	return a + b * c;
}

int count2(int a, int b, int c){
	return a + b - c;
}

int main(){
	int A = count1(50,50,20);
	int B = count2(50,50,20);

	printf("Value A : %d\n", A);
	printf("Value B : %d\n", B);

	return 0;
}

