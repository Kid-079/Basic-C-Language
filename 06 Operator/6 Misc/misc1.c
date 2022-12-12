#include <stdio.h>

int main(){	
	int a = 1;
	int *p;
	
	p=&a;

	printf("Address a : %p\n",&a);
	printf("Value a : %d\n",a);
	printf("Address pointer  : %p\n",p);
	printf("Value *pointer : %d\n",*p);

	return 0;
}