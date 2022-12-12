#include <stdio.h>

int Accuracy = 89;

void showAccuracy(){
	printf("Accuracy = %d\n", Accuracy);
}


int main()
{
	showAccuracy();
	printf("Accuracy = %d\n", Accuracy);
	getchar();
	return 0;
}