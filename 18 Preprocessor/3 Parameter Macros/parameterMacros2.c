#include <stdio.h>

#define A(a,b) ((a)*(2*(b + a)))
#define B(a,b) (4*(a*b/2))

int main(){
	printf("Value : %d\n", A(10,20));
	printf("Value : %d\n", B(10,20));
	return 0;
}