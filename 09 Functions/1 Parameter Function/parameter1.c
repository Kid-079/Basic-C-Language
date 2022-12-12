#include <stdio.h>

void aFunction(char a[], int b){
	printf("a : %s\nb : %d\n", a, b);
}

int main(){
	aFunction("ABC", 10);
	return 0;
}