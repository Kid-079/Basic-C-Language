#include <stdio.h>

int main()
{
	char Accuracy;

	printf("Enter Accuracy : ");
	Accuracy = getc(stdin);

	printf("Show Accuracy : ");
	putc(Accuracy, stdout);

	return 0;
}