#include <stdio.h>

int main(){
	int a = 10;

	A:do{
		printf("Value : %d\n",a);
		a--;
		if (a == 5){
			a = a - 1;
			printf("Give me five\n");
			goto A;			
		}
	} while (a > 0);
	return 0;
}