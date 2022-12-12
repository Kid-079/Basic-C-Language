#include <stdio.h>

enum Year {Jan, Feb, March, Apr, May, Jun, Jul, Aug, Sept, Okt, Nov, Des};

int main()
{
	enum Year Month ;
	Month = Jun;
	// printf("Month %d\n", Month);
	printf("Month %d\n", Month+1);
	
	return 0;
}