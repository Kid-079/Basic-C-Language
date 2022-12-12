#include <stdio.h>

int main(){
	
	int a = 10;
	int b = 20;
	
	void *p1 = &a;
	void *p2 = &b;
	
	p1 = &b;
	p2 = &a;

	printf("Value : %d\n", *(int *)p1);
	printf("Value : %d\n", *(int *)p2);

	return 0;
}