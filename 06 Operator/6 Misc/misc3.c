#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int *p;

	a=b;
	// b=a;
	p=&b;
	
	printf("Address a : %p\n",&a);
	printf("Value a   : %d\n",a);

	printf("Address b : %p\n",&b);
	printf("Value b   : %d\n",b);

	printf("Address Pointer : %p\n",p);
	printf("Value Pointer   : %d\n",*p);
	return 0;
}