#include <stdio.h>

const int MIN = 4;

int main(){
	int value[] = {10, 20, 30, 40, 50};
	int i;
	int *p;

	p = value;
	i = 0;

	while (p <= &value[MIN - 1]){
		printf("Address [%d] : %p\n", i, p);
		printf("Value   [%d] : %d\n", i, *p);

		p++;
		i++;
	}
	return 0;
}