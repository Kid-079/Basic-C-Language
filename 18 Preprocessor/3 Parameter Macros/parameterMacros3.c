#include <stdio.h>
#define A 50
#define B 50

#if A == B
	#error THIS IS ERROR A == B
#endif


int main(){	
	printf("Value : %d != %d \n", A, B);
	return 0;
}