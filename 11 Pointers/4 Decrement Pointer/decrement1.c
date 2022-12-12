#include <stdio.h>

const int MIN = 2;

int main(){
	int value[] = {10,20,30,40,50};
	int i;
	int *p;

	p = &value[MIN -  1];

	for (i = MIN; i > 0; i--){
		printf("Address [%d] : %p\n", i, p);
		printf("Value   [%d] : %d\n", i, *p);
		p--;
	}
	return 0;
}