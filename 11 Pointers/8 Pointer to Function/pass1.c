#include <stdio.h>
#include <time.h>

void getValue(unsigned int *pointer);

int main(){
	unsigned int value;
	getValue(&value);

	printf("Value : %u\n", value);

	return 0;
}

void getValue(unsigned int *pointer){
	*pointer = time(NULL);
	return;
}
