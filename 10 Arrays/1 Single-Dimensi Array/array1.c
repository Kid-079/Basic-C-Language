#include <stdio.h>

int main(){
	char a[5] = {'A','B','C','D','E'};
	int b[5] = {10,20,30,40,50};

	printf("A : %c || B : %d\n", a[1], b[1]);
	printf("A : %c || B : %d\n", a[2], b[1]);
	printf("A : %c || B : %d\n", a[3], b[2]);

	return 0;
}