#include <stdio.h>

int main(){
	char a[3] = {'A', 'B'};
	int b[] = {1,2,3,4,5,6};

	b[4] = 1; // Change Array Element

	printf("Value : %s\n", a);
	printf("Value : %d\n", b[6]);
	printf("Value : %d\n", b[4]);

	return 0;
}