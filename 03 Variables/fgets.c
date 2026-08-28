#include <stdio.h>

int main()
{
	char Accuracy[5];

	printf("Accuracy : ");
	fgets(Accuracy, sizeof(Accuracy), stdin);	
	printf("Show Accuracy : %s\n", Accuracy);	

	return 0;
}
