#include <stdio.h>
#define A 10
#define B 20

#if A == B
	#warning Warning A == B
#endif

int main(){
	printf("Value : %d != %d \n", A, B);	
	return 0;
}