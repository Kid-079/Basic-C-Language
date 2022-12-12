#include <stdio.h>

int main()
{
	char Accuracy[2];

	printf("Accuracy : ");
	fgets(Accuracy, sizeof(Accuracy), stdin);	
	printf("Show Accuracy : %s\n", Accuracy);	

	return 0;
}