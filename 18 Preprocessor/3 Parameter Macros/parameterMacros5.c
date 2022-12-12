#include <stdio.h>
#define A 20
#define B 50

#if A < B 
	#define VALUE "A < B"
#elif A > B 
	#define VALUE "A > B"
#else 
	#error THIS IS ERROR A == B
#endif


int main(){	
	printf("Value : %d != %d \n", A, B);
	printf("Value : %s \n", VALUE);
	return 0;
}