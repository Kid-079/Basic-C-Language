#include <stdio.h>

int main(){
	int a = 10;
	int b;
	int *p;

	a=b;
	
	p=&a;

	printf("Address a         : %p\n",&a);
	printf("Value a           : %d\n",a);
	printf("Address pointer   : %p\n",p);
	printf("Value *pointer    : %d\n",*p);

	return 0;
}