#include <stdio.h>

int main(){
	int a[5][2] = {
		{10,20}, 
		{30,40},
		{50,60},
		{70,80}
	};

	printf("Value : %d\n", a[0][1]);
	printf("Value : %d\n", a[3][0]);
	printf("Value : %d\n", a[0][1]);

	return 0;
}