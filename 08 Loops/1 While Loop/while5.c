#include <stdio.h>

int main(){
	int a = 0;

	A:while(a < 10){
		printf("Value : %d\n", a);
		a++;
		if (a == 5){
			printf("Wondeful\n");
			a++;
			goto A;
		}
		if (a == 9){
			printf("Good\n");
			break;
		}
	}
	return 0;
}