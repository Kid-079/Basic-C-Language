#include <stdio.h>
#include <float.h>

int main()
{	
	printf("Storage   Size  : %ld byte \n", sizeof(int));
	printf("Minimum   Value : %E byte \n", FLT_MIN);
	printf("Maximum   Value : %E byte \n", FLT_MAX);
	printf("Precision Value : %d byte \n", FLT_DIG);
	return 0;
}

