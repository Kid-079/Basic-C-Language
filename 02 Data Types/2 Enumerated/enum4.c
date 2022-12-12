#include <stdio.h>

enum favorite {
	A = 3,
	B = 5,
	C = 7,
	D = 9
};

int main()
{
	int myFavorite = A | D;

	printf("%d\n", myFavorite);
	return 0;
}