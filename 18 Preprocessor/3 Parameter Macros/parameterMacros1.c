#include <stdio.h>

#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){
	printf("Value Min : %d\n", MIN(10,20));
	return 0;
}