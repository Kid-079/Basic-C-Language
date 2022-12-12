#include <stdio.h>

enum Day {Sunday=3, Monday, Tuesday=7, Wednesday, Thursday=9, Friday, Saturday};

int main()
{
	printf("%d %d %d %d %d %d %d \n", Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday);
	
	return 0;
}