#include <stdio.h>

int main(){
	int a = 0;

	A:do{
		printf("Value : %d\n",a);
		a++;
		if (a == 5){
			a = a + 1;
			goto A; 
		}
	} while (a < 10);
	return 0;
}