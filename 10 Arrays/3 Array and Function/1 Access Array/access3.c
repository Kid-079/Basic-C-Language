#include <stdio.h>

int main(){
	int value[10];
	int index;
	int i;
	int total;
	double average;

	printf("Enter Index 1 - 10 : \n");
	scanf("%d", &index);

	for(i = 0; i < index; i++){
		printf("Index [%d] : ", i + 1);
		scanf("%d", &value[i]);

		total += value[i];
	}

	average = (double) total / index;

	printf("Average : %f\n", average);
	
	return 0;
}