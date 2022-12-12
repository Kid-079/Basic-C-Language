#include <stdio.h>

int main(){

	int value[4][3] = {
		{5,10,15},
		{20,25,30},
		{35,40,45},
		{50,55,60},
	};

	int array1;
	int array2;

	printf("Index [%d][%d] = %d\n", array1, array2, value[3][1]);

	return 0;
}