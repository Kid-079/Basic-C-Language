#include <stdio.h>

int value(unsigned int a){
	if (a <= 1){
		return 1;
	}
	return a * value(a - 1);
}

int main(){
	int a = 6;
	printf("Value : %d -> %d\n", a, value(a));

	return 0;
}


/*

Factorial :
  5! -> 5.4.3.2.1 => 120

*/