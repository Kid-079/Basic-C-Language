#include <stdio.h>

int main(){
	char string[10];
	int a;

	// Input
	printf("Enter Name : ");
	scanf("%s", string);
	printf("Enter Id : ");
	scanf("%d", &a);

	// Output
	printf("=====================\n");
	printf("Name : %s\n", string);
	printf("Id   : %d\n", a);

	return 0;
}